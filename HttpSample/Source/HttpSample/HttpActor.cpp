#include "HttpActor.h"

// Sets default values
AHttpActor::AHttpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Http = &FHttpModule::Get();
}

// Called when the game starts or when spawned
void AHttpActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHttpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHttpActor::MyHttpMethod(FString myText)
{
    // Jsonデータの作成
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("myText", myText);

    // OutputStringにJson書き出し
    FString OutputString;
    TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter);

    // Httpリクエストの作成
    TSharedRef<IHttpRequest> Request = Http->CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &AHttpActor::OnResponseReceived);
    Request->SetURL("https://httpbin.org/post");
    Request->SetVerb("POST");
    Request->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetContentAsString(OutputString);
    Request->ProcessRequest();
}

void AHttpActor::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

    GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, "Reseive!");

    // Jsonオブジェクトをデシリアライズ
    if (FJsonSerializer::Deserialize(Reader, JsonObject))
    {
        // Jsonから変数名myTextの値を取得
        FString str = JsonObject->GetStringField("origin");
        // UE4クライアントにデバッグメッセージを表示
        GEngine->AddOnScreenDebugMessage(1, 20.0f, FColor::Blue, str);
    }
}

FString AHttpActor::MyHttpMethodLambda(FString myText)
{
    // Jsonデータの作成
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    FString tmp;
    JsonObject->SetStringField("myText", myText);

    // OutputStringにJson書き出し
    FString OutputString;
    TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter);

    // Httpリクエストの作成
    TSharedRef<IHttpRequest> Request = Http->CreateRequest();
    Request->OnProcessRequestComplete().BindLambda([&](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful) {
        TSharedPtr<FJsonObject> ResponseJson;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
        // Jsonオブジェクトをデシリアライズ
        if (FJsonSerializer::Deserialize(Reader, ResponseJson))
        {
            tmp = ResponseJson->GetStringField("origin");
        }
        else {
            GEngine->AddOnScreenDebugMessage(2, 3.0f, FColor::Red, "Response error");
        }});
    Request->SetURL("https://httpbin.org/post");
    Request->SetVerb("POST");
    Request->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetContentAsString(OutputString);
    Request->ProcessRequest();

    FHttpModule::Get().GetHttpManager().Flush(false);

    return tmp;
}


FJsonObject AHttpActor::RequestFutaba(TSharedRef<IHttpRequest> Request)
{
    // Jsonデータの作成
    FJsonObject ResponseJsonObject;

    // Httpリクエストの作成
    Request->OnProcessRequestComplete().BindLambda([&](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful) {
        TSharedPtr<FJsonObject> ResponseJson;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
        // Jsonオブジェクトをデシリアライズ
        if (bWasSuccessful && Response->GetResponseCode() >= 200 && Response->GetResponseCode() < 300 && FJsonSerializer::Deserialize(Reader, ResponseJson))
        {
            ResponseJsonObject = *ResponseJson;
        }
        else {
            ResponseJsonObject.SetStringField("Status", "Error");
            ResponseJsonObject.SetNumberField("StatusCode", Response->GetResponseCode());
            ResponseJsonObject.SetStringField("ResponseContent", Response->GetContentAsString());
        }});
    Request->ProcessRequest();
    FHttpModule::Get().GetHttpManager().Flush(false);

    return ResponseJsonObject;
}

void AHttpActor::AddCommonHeaders(TSharedRef<IHttpRequest> Request)
{
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetHeader(TEXT("X-NEDO-CLIENT-ID"), AHttpActor::ClientId);
    Request->SetHeader(TEXT("X-NEDO-ACCESS-TOKEN"), AHttpActor::AccessToken);
}

FString AHttpActor::GetAccessToken(FString ConfigFilePath, FutabaRequestStatus& FutabaStatus)
{
    const FString JsonFullPath = FPaths::GameSourceDir().Append(ConfigFilePath);

    auto LoadError = [&JsonFullPath, &FutabaStatus]()
    {
        UE_LOG(LogTemp, Error, TEXT("Failed LoadJson : %s"), *JsonFullPath);
        FutabaStatus = FutabaRequestStatus::User_Error;
        return nullptr;
    };

    FString loadFileString;
    if (FFileHelper::LoadFileToString(loadFileString, *JsonFullPath) == false)
    {
        FutabaStatus = FutabaRequestStatus::User_Error;
        LoadError();
    }

    const auto JsonReader = TJsonReaderFactory<TCHAR>::Create(loadFileString);
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

    FString Message = JsonFullPath;

    if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
    {
        // Create HTTP Request
        TSharedRef<IHttpRequest> Request = AHttpActor::Http->CreateRequest();
        Request->SetURL("https://" + AHttpActor::HostAuth + "/api/token");

        if (!JsonObject->GetStringField("refresh_token").IsEmpty())
        {
            Request->SetVerb("PATCH");
            Request->SetHeader(TEXT("X-NEDO-CLIENT-REFRESHTOKEN"), JsonObject->GetStringField("refresh_token"));
            Request->SetHeader(TEXT("X-NEDO-GRANT-TYPE"), TEXT("refresh_token"));
        }
        else
        {
            Request->SetVerb("POST");
            Request->SetHeader(TEXT("X-NEDO-GRANT-TYPE"), TEXT("client_credentials"));
        }

        Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
        Request->SetHeader(TEXT("X-NEDO-CLIENT-ID"), JsonObject->GetStringField("client_id"));
        Request->SetHeader(TEXT("X-NEDO-CLIENT-SECRET"), JsonObject->GetStringField("client_secret"));

        // Response from API
        FJsonObject Response = RequestFutaba(Request);


        if (Response.HasField("access_token") && Response.HasField("refresh_token"))
        {
            AHttpActor::AccessToken = Response.GetStringField("access_token");
            AHttpActor::RefreshToken = Response.GetStringField("refresh_token");

            TSharedPtr<FJsonObject> Buffer = MakeShareable(new FJsonObject);
            Buffer->SetStringField("client_id", JsonObject->GetStringField("client_id"));
            Buffer->SetStringField("client_secret", JsonObject->GetStringField("client_secret"));
            Buffer->SetStringField("access_token", AHttpActor::AccessToken);
            Buffer->SetStringField("refresh_token", AHttpActor::RefreshToken);

            // Create writer for file out
            FString OutPutString;
            TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutPutString);

            // Write json object into FString
            FJsonSerializer::Serialize(Buffer.ToSharedRef(), Writer);
            FFileHelper::SaveStringToFile(OutPutString, *JsonFullPath);
            
            Message = Response.GetStringField("refresh_token");
            FutabaStatus = FutabaRequestStatus::Success;
        }
        else if (Response.HasField("Status"))
        {
            Message = Response.GetStringField("ResponseContent");
            if (Response.GetNumberField("StatusCode") >= 500)
            {
                FutabaStatus = FutabaRequestStatus::Platform_Error;
            }
            else
            {
                FutabaStatus = FutabaRequestStatus::User_Error;
            }
        }
    }   
        return Message;
}


void AHttpActor::SetHostURL(FString prefix)
{
    HostAuth = prefix + "-dev-app-auth.azurewebsites.net";
    HostHot = prefix + "-dev-app-hot.azurewebsites.net";
    HostCold = prefix + "-dev-app-cold.azurewebsites.net";
    HostExt = prefix + "-dev-app-extapi.azurewebsites.net";
}

void AHttpActor::ShowConfiguration()
{
    GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Blue, AHttpActor::HostAuth);
    GEngine->AddOnScreenDebugMessage(2, 5.0f, FColor::Blue, AHttpActor::HostHot);
    GEngine->AddOnScreenDebugMessage(3, 5.0f, FColor::Blue, AHttpActor::HostCold);
    GEngine->AddOnScreenDebugMessage(4, 5.0f, FColor::Blue, AHttpActor::HostExt);
    GEngine->AddOnScreenDebugMessage(5, 5.0f, FColor::Blue, AHttpActor::ClientId);
    GEngine->AddOnScreenDebugMessage(6, 5.0f, FColor::Blue, AHttpActor::ClientSecret);
    GEngine->AddOnScreenDebugMessage(7, 5.0f, FColor::Blue, AHttpActor::AccessToken);
    GEngine->AddOnScreenDebugMessage(8, 5.0f, FColor::Blue, AHttpActor::RefreshToken);
}

void AHttpActor::SetAccessTokenByConfigFile(FString ConfigFilePath)
{
    const FString JsonFullPath = FPaths::GameSourceDir().Append(ConfigFilePath);

    auto LoadError = [&JsonFullPath]()
    {
        UE_LOG(LogTemp, Error, TEXT("Failed LoadJson : %s"), *JsonFullPath);
        return nullptr;
    };

    FString loadFileString;
    if (FFileHelper::LoadFileToString(loadFileString, *JsonFullPath) == false)
    {
        LoadError();
    }

    const auto JsonReader = TJsonReaderFactory<TCHAR>::Create(loadFileString);
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

    if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
    {

        if (JsonObject->HasField("access_token") && JsonObject->HasField("refresh_token"))
        {
            AHttpActor::ClientId = JsonObject->GetStringField("client_id");
            AHttpActor::ClientSecret = JsonObject->GetStringField("client_secret");
            AHttpActor::AccessToken = JsonObject->GetStringField("access_token");
            AHttpActor::RefreshToken = JsonObject->GetStringField("refresh_token");
        }
        else
        {
            LoadError();
        }
    }
    else
    {
        LoadError();
    }
}

void AHttpActor::SetAccessToken(FString Id, FString Secret, FString Access_Token, FString Refresh_Token)
{
    if (!Id.IsEmpty())
    {
        AHttpActor::ClientId = Id;
    }

    if (!Secret.IsEmpty())
    {
        AHttpActor::ClientSecret = Secret;
    }

    if (!Access_Token.IsEmpty())
    {
        AHttpActor::AccessToken = Access_Token;
    }

    if (!Refresh_Token.IsEmpty())
    {
        AHttpActor::RefreshToken = Refresh_Token;
    }
    
}

FString AHttpActor::GetThings(FString BotPath)
{
    // Create HTTP Request
    TSharedRef<IHttpRequest> Request = AHttpActor::Http->CreateRequest();
    Request->SetURL("https://" + AHttpActor::HostHot + "/api/things?path=" + BotPath);
    Request->SetVerb("GET");
    AddCommonHeaders(Request);

    // Response from API
    FJsonObject Response = RequestFutaba(Request);

    if (Response.HasField("Status"))
    {
        return Response.GetStringField("ResponseContent");
    }
    else
    {
        TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
        *JsonObject = Response;
        FString OutputString;
        TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&OutputString);
        FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter);
        return OutputString;
    }
}