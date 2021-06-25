// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "HttpManager.h"
#include "HttpActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFutabaOnEventDispather);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHttpRequestCompleted, bool, bSuccessful, int32, ResponseCode, const FString&, Response);

UENUM(BlueprintType)
enum class FutabaRequestStatus : uint8
{
	Success,
	User_Error,
	Platform_Error
};

UCLASS()
class HTTPSAMPLE_API AHttpActor : public AActor
{
	GENERATED_BODY()

	
public:	
	// Sets default values for this actor's properties
	AHttpActor();
	FHttpModule* Http;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Futaba", meta = (DisplayName = "Prefix"))
		FString  ConnectionTarget = "cgll";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Futaba")
		FString  ClientId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Futaba")
		FString  ClientSecret;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Futaba")
		FString  AccessToken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Futaba")
		FString  RefreshToken;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void HandleRequestCompleted(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// HTTP通信をするメソッド
	UFUNCTION(BlueprintCallable, Category = "futaba")
		void MyHttpMethod(FString myText);

	// HTTP通信を行ってレスポンスが返ってきた際のイベント処理
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		FString MyHttpMethodLambda(FString myText);


	//Auth API
	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SetHostURL(FString prefix);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void ShowConfiguration();

	UFUNCTION(BlueprintCallable, Category = "futaba", Meta = (ExpandEnumAsExecs = "FutabaStatus"))
		FString GetAccessToken(FString ConfigFilePath, FutabaRequestStatus& FutabaStatus);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SetAccessTokenByConfigFile(FString ConfigFilePath);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SetAccessToken(FString Id, FString Secret, FString Access_Token, FString Refresh_Token);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetThings(FString BotPath);

	UPROPERTY(BlueprintAssignable, Category = "futaba")
		FFutabaOnEventDispather OnEventDispather;

	UPROPERTY(BlueprintAssignable, Category = "futaba")
		FOnHttpRequestCompleted OnRequestCompleted;



private:
	FString HostAuth = "cgll-dev-app-auth.azurewebsites.net";
	FString HostHot = "cgll-dev-app-hot.azurewebsites.net";
	FString HostCold = "cgll-dev-app-cold.azurewebsites.net";
	FString HostExt = "cgll-dev-app-extapi.azurewebsites.net";

	FJsonObject RequestFutaba(TSharedRef<IHttpRequest> Request);
	void AddCommonHeaders(TSharedRef<IHttpRequest> Request);

};
