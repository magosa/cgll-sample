// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpSample/HttpActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpActor() {}
// Cross Module References
	HTTPSAMPLE_API UFunction* Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HttpSample();
	HTTPSAMPLE_API UFunction* Z_Construct_UDelegateFunction_HttpSample_FutabaOnEventDispather__DelegateSignature();
	HTTPSAMPLE_API UEnum* Z_Construct_UEnum_HttpSample_FutabaRequestStatus();
	HTTPSAMPLE_API UClass* Z_Construct_UClass_AHttpActor_NoRegister();
	HTTPSAMPLE_API UClass* Z_Construct_UClass_AHttpActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics
	{
		struct _Script_HttpSample_eventOnHttpRequestCompleted_Parms
		{
			FString Response;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Response;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_HttpSample_eventOnHttpRequestCompleted_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_HttpSample_eventOnHttpRequestCompleted_Parms), &Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HttpSample_eventOnHttpRequestCompleted_Parms, Response), METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpSample, nullptr, "OnHttpRequestCompleted__DelegateSignature", nullptr, nullptr, sizeof(_Script_HttpSample_eventOnHttpRequestCompleted_Parms), Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_HttpSample_OnHttpRequestCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_HttpSample_FutabaOnEventDispather__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpSample_FutabaOnEventDispather__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpSample_FutabaOnEventDispather__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpSample, nullptr, "FutabaOnEventDispather__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpSample_FutabaOnEventDispather__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpSample_FutabaOnEventDispather__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HttpSample_FutabaOnEventDispather__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_HttpSample_FutabaOnEventDispather__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* FutabaRequestStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HttpSample_FutabaRequestStatus, Z_Construct_UPackage__Script_HttpSample(), TEXT("FutabaRequestStatus"));
		}
		return Singleton;
	}
	template<> HTTPSAMPLE_API UEnum* StaticEnum<FutabaRequestStatus>()
	{
		return FutabaRequestStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FutabaRequestStatus(FutabaRequestStatus_StaticEnum, TEXT("/Script/HttpSample"), TEXT("FutabaRequestStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HttpSample_FutabaRequestStatus_Hash() { return 401080811U; }
	UEnum* Z_Construct_UEnum_HttpSample_FutabaRequestStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HttpSample();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FutabaRequestStatus"), 0, Get_Z_Construct_UEnum_HttpSample_FutabaRequestStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FutabaRequestStatus::Success", (int64)FutabaRequestStatus::Success },
				{ "FutabaRequestStatus::User_Error", (int64)FutabaRequestStatus::User_Error },
				{ "FutabaRequestStatus::Platform_Error", (int64)FutabaRequestStatus::Platform_Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "HttpActor.h" },
				{ "Platform_Error.Name", "FutabaRequestStatus::Platform_Error" },
				{ "Success.Name", "FutabaRequestStatus::Success" },
				{ "User_Error.Name", "FutabaRequestStatus::User_Error" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HttpSample,
				nullptr,
				"FutabaRequestStatus",
				"FutabaRequestStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AHttpActor::execGetThings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BotPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetThings(Z_Param_BotPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHttpActor::execSetAccessToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Id);
		P_GET_PROPERTY(FStrProperty,Z_Param_Secret);
		P_GET_PROPERTY(FStrProperty,Z_Param_Access_Token);
		P_GET_PROPERTY(FStrProperty,Z_Param_Refresh_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAccessToken(Z_Param_Id,Z_Param_Secret,Z_Param_Access_Token,Z_Param_Refresh_Token);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHttpActor::execSetAccessTokenByConfigFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConfigFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAccessTokenByConfigFile(Z_Param_ConfigFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHttpActor::execGetAccessToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConfigFilePath);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_FutabaStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccessToken(Z_Param_ConfigFilePath,(FutabaRequestStatus&)(Z_Param_Out_FutabaStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHttpActor::execShowConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHttpActor::execSetHostURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_prefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHostURL(Z_Param_prefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHttpActor::execMyHttpMethodLambda)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_myText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->MyHttpMethodLambda(Z_Param_myText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHttpActor::execMyHttpMethod)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_myText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MyHttpMethod(Z_Param_myText);
		P_NATIVE_END;
	}
	void AHttpActor::StaticRegisterNativesAHttpActor()
	{
		UClass* Class = AHttpActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccessToken", &AHttpActor::execGetAccessToken },
			{ "GetThings", &AHttpActor::execGetThings },
			{ "MyHttpMethod", &AHttpActor::execMyHttpMethod },
			{ "MyHttpMethodLambda", &AHttpActor::execMyHttpMethodLambda },
			{ "SetAccessToken", &AHttpActor::execSetAccessToken },
			{ "SetAccessTokenByConfigFile", &AHttpActor::execSetAccessTokenByConfigFile },
			{ "SetHostURL", &AHttpActor::execSetHostURL },
			{ "ShowConfiguration", &AHttpActor::execShowConfiguration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics
	{
		struct HttpActor_eventGetAccessToken_Parms
		{
			FString ConfigFilePath;
			FutabaRequestStatus FutabaStatus;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FutabaStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FutabaStatus_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventGetAccessToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::NewProp_FutabaStatus = { "FutabaStatus", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventGetAccessToken_Parms, FutabaStatus), Z_Construct_UEnum_HttpSample_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::NewProp_FutabaStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::NewProp_ConfigFilePath = { "ConfigFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventGetAccessToken_Parms, ConfigFilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::NewProp_FutabaStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::NewProp_FutabaStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::NewProp_ConfigFilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "ExpandEnumAsExecs", "FutabaStatus" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHttpActor, nullptr, "GetAccessToken", nullptr, nullptr, sizeof(HttpActor_eventGetAccessToken_Parms), Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHttpActor_GetAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHttpActor_GetAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHttpActor_GetThings_Statics
	{
		struct HttpActor_eventGetThings_Parms
		{
			FString BotPath;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BotPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_GetThings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventGetThings_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_GetThings_Statics::NewProp_BotPath = { "BotPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventGetThings_Parms, BotPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHttpActor_GetThings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_GetThings_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_GetThings_Statics::NewProp_BotPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHttpActor_GetThings_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHttpActor_GetThings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHttpActor, nullptr, "GetThings", nullptr, nullptr, sizeof(HttpActor_eventGetThings_Parms), Z_Construct_UFunction_AHttpActor_GetThings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_GetThings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHttpActor_GetThings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_GetThings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHttpActor_GetThings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHttpActor_GetThings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHttpActor_MyHttpMethod_Statics
	{
		struct HttpActor_eventMyHttpMethod_Parms
		{
			FString myText;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_myText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_MyHttpMethod_Statics::NewProp_myText = { "myText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventMyHttpMethod_Parms, myText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHttpActor_MyHttpMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_MyHttpMethod_Statics::NewProp_myText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHttpActor_MyHttpMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "Comment", "// HTTP?\xca\x90M?????\xe9\x83\x81?\\?b?h\n" },
		{ "ModuleRelativePath", "HttpActor.h" },
		{ "ToolTip", "HTTP?\xca\x90M?????\xe9\x83\x81?\\?b?h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHttpActor_MyHttpMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHttpActor, nullptr, "MyHttpMethod", nullptr, nullptr, sizeof(HttpActor_eventMyHttpMethod_Parms), Z_Construct_UFunction_AHttpActor_MyHttpMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_MyHttpMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHttpActor_MyHttpMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_MyHttpMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHttpActor_MyHttpMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHttpActor_MyHttpMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics
	{
		struct HttpActor_eventMyHttpMethodLambda_Parms
		{
			FString myText;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_myText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventMyHttpMethodLambda_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics::NewProp_myText = { "myText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventMyHttpMethodLambda_Parms, myText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics::NewProp_myText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHttpActor, nullptr, "MyHttpMethodLambda", nullptr, nullptr, sizeof(HttpActor_eventMyHttpMethodLambda_Parms), Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics
	{
		struct HttpActor_eventSetAccessToken_Parms
		{
			FString Id;
			FString Secret;
			FString Access_Token;
			FString Refresh_Token;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Refresh_Token;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Access_Token;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Secret;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::NewProp_Refresh_Token = { "Refresh_Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventSetAccessToken_Parms, Refresh_Token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::NewProp_Access_Token = { "Access_Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventSetAccessToken_Parms, Access_Token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::NewProp_Secret = { "Secret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventSetAccessToken_Parms, Secret), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventSetAccessToken_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::NewProp_Refresh_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::NewProp_Access_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::NewProp_Secret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHttpActor, nullptr, "SetAccessToken", nullptr, nullptr, sizeof(HttpActor_eventSetAccessToken_Parms), Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHttpActor_SetAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHttpActor_SetAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile_Statics
	{
		struct HttpActor_eventSetAccessTokenByConfigFile_Parms
		{
			FString ConfigFilePath;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile_Statics::NewProp_ConfigFilePath = { "ConfigFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventSetAccessTokenByConfigFile_Parms, ConfigFilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile_Statics::NewProp_ConfigFilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHttpActor, nullptr, "SetAccessTokenByConfigFile", nullptr, nullptr, sizeof(HttpActor_eventSetAccessTokenByConfigFile_Parms), Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHttpActor_SetHostURL_Statics
	{
		struct HttpActor_eventSetHostURL_Parms
		{
			FString prefix;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_prefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHttpActor_SetHostURL_Statics::NewProp_prefix = { "prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpActor_eventSetHostURL_Parms, prefix), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHttpActor_SetHostURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHttpActor_SetHostURL_Statics::NewProp_prefix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHttpActor_SetHostURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "Comment", "//Auth API\n" },
		{ "ModuleRelativePath", "HttpActor.h" },
		{ "ToolTip", "Auth API" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHttpActor_SetHostURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHttpActor, nullptr, "SetHostURL", nullptr, nullptr, sizeof(HttpActor_eventSetHostURL_Parms), Z_Construct_UFunction_AHttpActor_SetHostURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_SetHostURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHttpActor_SetHostURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_SetHostURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHttpActor_SetHostURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHttpActor_SetHostURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHttpActor_ShowConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHttpActor_ShowConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHttpActor_ShowConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHttpActor, nullptr, "ShowConfiguration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHttpActor_ShowConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_ShowConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHttpActor_ShowConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHttpActor_ShowConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHttpActor_NoRegister()
	{
		return AHttpActor::StaticClass();
	}
	struct Z_Construct_UClass_AHttpActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEventDispather_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventDispather;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RefreshToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHttpActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpSample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHttpActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHttpActor_GetAccessToken, "GetAccessToken" }, // 141774289
		{ &Z_Construct_UFunction_AHttpActor_GetThings, "GetThings" }, // 2232477552
		{ &Z_Construct_UFunction_AHttpActor_MyHttpMethod, "MyHttpMethod" }, // 854605711
		{ &Z_Construct_UFunction_AHttpActor_MyHttpMethodLambda, "MyHttpMethodLambda" }, // 7337026
		{ &Z_Construct_UFunction_AHttpActor_SetAccessToken, "SetAccessToken" }, // 3563795580
		{ &Z_Construct_UFunction_AHttpActor_SetAccessTokenByConfigFile, "SetAccessTokenByConfigFile" }, // 3964117008
		{ &Z_Construct_UFunction_AHttpActor_SetHostURL, "SetHostURL" }, // 872717599
		{ &Z_Construct_UFunction_AHttpActor_ShowConfiguration, "ShowConfiguration" }, // 1889539480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHttpActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpActor.h" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHttpActor_Statics::NewProp_OnEventDispather_MetaData[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHttpActor_Statics::NewProp_OnEventDispather = { "OnEventDispather", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHttpActor, OnEventDispather), Z_Construct_UDelegateFunction_HttpSample_FutabaOnEventDispather__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AHttpActor_Statics::NewProp_OnEventDispather_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHttpActor_Statics::NewProp_OnEventDispather_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHttpActor_Statics::NewProp_RefreshToken_MetaData[] = {
		{ "Category", "Futaba" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHttpActor_Statics::NewProp_RefreshToken = { "RefreshToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHttpActor, RefreshToken), METADATA_PARAMS(Z_Construct_UClass_AHttpActor_Statics::NewProp_RefreshToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHttpActor_Statics::NewProp_RefreshToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHttpActor_Statics::NewProp_AccessToken_MetaData[] = {
		{ "Category", "Futaba" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHttpActor_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHttpActor, AccessToken), METADATA_PARAMS(Z_Construct_UClass_AHttpActor_Statics::NewProp_AccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHttpActor_Statics::NewProp_AccessToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHttpActor_Statics::NewProp_ClientSecret_MetaData[] = {
		{ "Category", "Futaba" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHttpActor_Statics::NewProp_ClientSecret = { "ClientSecret", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHttpActor, ClientSecret), METADATA_PARAMS(Z_Construct_UClass_AHttpActor_Statics::NewProp_ClientSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHttpActor_Statics::NewProp_ClientSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHttpActor_Statics::NewProp_ClientId_MetaData[] = {
		{ "Category", "Futaba" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHttpActor_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHttpActor, ClientId), METADATA_PARAMS(Z_Construct_UClass_AHttpActor_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHttpActor_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHttpActor_Statics::NewProp_ConnectionTarget_MetaData[] = {
		{ "Category", "Futaba" },
		{ "DisplayName", "Prefix" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHttpActor_Statics::NewProp_ConnectionTarget = { "ConnectionTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHttpActor, ConnectionTarget), METADATA_PARAMS(Z_Construct_UClass_AHttpActor_Statics::NewProp_ConnectionTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHttpActor_Statics::NewProp_ConnectionTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHttpActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHttpActor_Statics::NewProp_OnEventDispather,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHttpActor_Statics::NewProp_RefreshToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHttpActor_Statics::NewProp_AccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHttpActor_Statics::NewProp_ClientSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHttpActor_Statics::NewProp_ClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHttpActor_Statics::NewProp_ConnectionTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHttpActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHttpActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHttpActor_Statics::ClassParams = {
		&AHttpActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHttpActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHttpActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHttpActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHttpActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHttpActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHttpActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHttpActor, 1576151610);
	template<> HTTPSAMPLE_API UClass* StaticClass<AHttpActor>()
	{
		return AHttpActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHttpActor(Z_Construct_UClass_AHttpActor, &AHttpActor::StaticClass, TEXT("/Script/HttpSample"), TEXT("AHttpActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHttpActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
