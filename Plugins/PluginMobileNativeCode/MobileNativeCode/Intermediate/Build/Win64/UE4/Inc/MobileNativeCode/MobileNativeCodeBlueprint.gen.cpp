// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobileNativeCode/Public/MobileNativeCodeBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobileNativeCodeBlueprint() {}
// Cross Module References
	MOBILENATIVECODE_API UFunction* Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MobileNativeCode();
	MOBILENATIVECODE_API UClass* Z_Construct_UClass_UMobileNativeCodeBlueprint_NoRegister();
	MOBILENATIVECODE_API UClass* Z_Construct_UClass_UMobileNativeCodeBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOBILENATIVECODE_API UEnum* Z_Construct_UEnum_MobileNativeCode_EToastLengthMessage();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics
	{
		struct _Script_MobileNativeCode_eventTypeDispacth_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MobileNativeCode_eventTypeDispacth_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// #~~~~~~~~~~~~~~~~~~~~~~~~~ begin 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n//-- Dispatcher\n" },
		{ "ModuleRelativePath", "Public/MobileNativeCodeBlueprint.h" },
		{ "ToolTip", "#~~~~~~~~~~~~~~~~~~~~~~~~~ begin 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n-- Dispatcher" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MobileNativeCode, nullptr, "TypeDispacth__DelegateSignature", nullptr, nullptr, sizeof(_Script_MobileNativeCode_eventTypeDispacth_Parms), Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMobileNativeCodeBlueprint::execDispatchGetter)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_CallBackPlatform);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMobileNativeCodeBlueprint::DispatchGetter(FTypeDispacth(Z_Param_Out_CallBackPlatform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMobileNativeCodeBlueprint::execOpenGallery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UMobileNativeCodeBlueprint::OpenGallery();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMobileNativeCodeBlueprint::execExampleMyJavaObject)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_JavaBundle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMobileNativeCodeBlueprint::ExampleMyJavaObject(Z_Param_Out_JavaBundle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMobileNativeCodeBlueprint::execGetDeviceInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMobileNativeCodeBlueprint::GetDeviceInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMobileNativeCodeBlueprint::execExampleArray)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Arr1);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Arr2);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMobileNativeCodeBlueprint::ExampleArray(Z_Param_Out_Arr1,Z_Param_Out_Arr2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMobileNativeCodeBlueprint::execShowToastMobile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_ENUM(EToastLengthMessage,Z_Param_Length);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMobileNativeCodeBlueprint::ShowToastMobile(Z_Param_Message,EToastLengthMessage(Z_Param_Length));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMobileNativeCodeBlueprint::execasyncHelloWorld)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_CallBackPlatform);
		P_GET_PROPERTY(FStrProperty,Z_Param_MyStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMobileNativeCodeBlueprint::asyncHelloWorld(FTypeDispacth(Z_Param_Out_CallBackPlatform),Z_Param_MyStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMobileNativeCodeBlueprint::execHelloWorld)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MyStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMobileNativeCodeBlueprint::HelloWorld(Z_Param_MyStr);
		P_NATIVE_END;
	}
	void UMobileNativeCodeBlueprint::StaticRegisterNativesUMobileNativeCodeBlueprint()
	{
		UClass* Class = UMobileNativeCodeBlueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "asyncHelloWorld", &UMobileNativeCodeBlueprint::execasyncHelloWorld },
			{ "DispatchGetter", &UMobileNativeCodeBlueprint::execDispatchGetter },
			{ "ExampleArray", &UMobileNativeCodeBlueprint::execExampleArray },
			{ "ExampleMyJavaObject", &UMobileNativeCodeBlueprint::execExampleMyJavaObject },
			{ "GetDeviceInfo", &UMobileNativeCodeBlueprint::execGetDeviceInfo },
			{ "HelloWorld", &UMobileNativeCodeBlueprint::execHelloWorld },
			{ "OpenGallery", &UMobileNativeCodeBlueprint::execOpenGallery },
			{ "ShowToastMobile", &UMobileNativeCodeBlueprint::execShowToastMobile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics
	{
		struct MobileNativeCodeBlueprint_eventasyncHelloWorld_Parms
		{
			FScriptDelegate CallBackPlatform;
			FString MyStr;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallBackPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CallBackPlatform;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MyStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::NewProp_CallBackPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::NewProp_CallBackPlatform = { "CallBackPlatform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileNativeCodeBlueprint_eventasyncHelloWorld_Parms, CallBackPlatform), Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::NewProp_CallBackPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::NewProp_CallBackPlatform_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::NewProp_MyStr = { "MyStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileNativeCodeBlueprint_eventasyncHelloWorld_Parms, MyStr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::NewProp_CallBackPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::NewProp_MyStr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "MobileNativeCode Category" },
		{ "Comment", "/**\n   * Asynchronous platform name concatenation from native code\n   */" },
		{ "CPP_Default_MyStr", "async Hello World" },
		{ "ModuleRelativePath", "Public/MobileNativeCodeBlueprint.h" },
		{ "ToolTip", "Asynchronous platform name concatenation from native code" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileNativeCodeBlueprint, nullptr, "asyncHelloWorld", nullptr, nullptr, sizeof(MobileNativeCodeBlueprint_eventasyncHelloWorld_Parms), Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics
	{
		struct MobileNativeCodeBlueprint_eventDispatchGetter_Parms
		{
			FScriptDelegate CallBackPlatform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallBackPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CallBackPlatform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::NewProp_CallBackPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::NewProp_CallBackPlatform = { "CallBackPlatform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileNativeCodeBlueprint_eventDispatchGetter_Parms, CallBackPlatform), Z_Construct_UDelegateFunction_MobileNativeCode_TypeDispacth__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::NewProp_CallBackPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::NewProp_CallBackPlatform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::NewProp_CallBackPlatform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "MobileNativeCode Category" },
		{ "ModuleRelativePath", "Public/MobileNativeCodeBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileNativeCodeBlueprint, nullptr, "DispatchGetter", nullptr, nullptr, sizeof(MobileNativeCodeBlueprint_eventDispatchGetter_Parms), Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics
	{
		struct MobileNativeCodeBlueprint_eventExampleArray_Parms
		{
			FString Arr1;
			FString Arr2;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Arr1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Arr2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics::NewProp_Arr1 = { "Arr1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileNativeCodeBlueprint_eventExampleArray_Parms, Arr1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics::NewProp_Arr2 = { "Arr2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileNativeCodeBlueprint_eventExampleArray_Parms, Arr2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics::NewProp_Arr1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics::NewProp_Arr2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "MobileNativeCode Category" },
		{ "Comment", "/**\n   * Example of passing different types of arrays and returning a String array with two values\n   */" },
		{ "ModuleRelativePath", "Public/MobileNativeCodeBlueprint.h" },
		{ "ToolTip", "Example of passing different types of arrays and returning a String array with two values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileNativeCodeBlueprint, nullptr, "ExampleArray", nullptr, nullptr, sizeof(MobileNativeCodeBlueprint_eventExampleArray_Parms), Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject_Statics
	{
		struct MobileNativeCodeBlueprint_eventExampleMyJavaObject_Parms
		{
			FString JavaBundle;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JavaBundle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject_Statics::NewProp_JavaBundle = { "JavaBundle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileNativeCodeBlueprint_eventExampleMyJavaObject_Parms, JavaBundle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject_Statics::NewProp_JavaBundle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "MobileNativeCode Category" },
		{ "Comment", "/**\n   * Only for Android. Example of working with Java objects inside C++\n   */" },
		{ "ModuleRelativePath", "Public/MobileNativeCodeBlueprint.h" },
		{ "ToolTip", "Only for Android. Example of working with Java objects inside C++" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileNativeCodeBlueprint, nullptr, "ExampleMyJavaObject", nullptr, nullptr, sizeof(MobileNativeCodeBlueprint_eventExampleMyJavaObject_Parms), Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo_Statics
	{
		struct MobileNativeCodeBlueprint_eventGetDeviceInfo_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileNativeCodeBlueprint_eventGetDeviceInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "MobileNativeCode Category" },
		{ "Comment", "/**\n   * Returns information about the device\n   */" },
		{ "ModuleRelativePath", "Public/MobileNativeCodeBlueprint.h" },
		{ "ToolTip", "Returns information about the device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileNativeCodeBlueprint, nullptr, "GetDeviceInfo", nullptr, nullptr, sizeof(MobileNativeCodeBlueprint_eventGetDeviceInfo_Parms), Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics
	{
		struct MobileNativeCodeBlueprint_eventHelloWorld_Parms
		{
			FString MyStr;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MyStr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics::NewProp_MyStr = { "MyStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileNativeCodeBlueprint_eventHelloWorld_Parms, MyStr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileNativeCodeBlueprint_eventHelloWorld_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics::NewProp_MyStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "MobileNativeCode Category" },
		{ "Comment", "/**\n   * Concatenation of the platform name from native code\n   */" },
		{ "CPP_Default_MyStr", "Hello World" },
		{ "ModuleRelativePath", "Public/MobileNativeCodeBlueprint.h" },
		{ "ToolTip", "Concatenation of the platform name from native code" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileNativeCodeBlueprint, nullptr, "HelloWorld", nullptr, nullptr, sizeof(MobileNativeCodeBlueprint_eventHelloWorld_Parms), Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileNativeCodeBlueprint_OpenGallery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileNativeCodeBlueprint_OpenGallery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MobileNativeCode Category" },
		{ "ModuleRelativePath", "Public/MobileNativeCodeBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_OpenGallery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileNativeCodeBlueprint, nullptr, "OpenGallery", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileNativeCodeBlueprint_OpenGallery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_OpenGallery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileNativeCodeBlueprint_OpenGallery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileNativeCodeBlueprint_OpenGallery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics
	{
		struct MobileNativeCodeBlueprint_eventShowToastMobile_Parms
		{
			FString Message;
			EToastLengthMessage Length;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Length_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileNativeCodeBlueprint_eventShowToastMobile_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::NewProp_Length_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileNativeCodeBlueprint_eventShowToastMobile_Parms, Length), Z_Construct_UEnum_MobileNativeCode_EToastLengthMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::NewProp_Length_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::NewProp_Length,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::Function_MetaDataParams[] = {
		{ "Category", "MobileNativeCode Category" },
		{ "Comment", "/**\n   * Displaying a pop-up message\n   */" },
		{ "ModuleRelativePath", "Public/MobileNativeCodeBlueprint.h" },
		{ "ToolTip", "Displaying a pop-up message" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileNativeCodeBlueprint, nullptr, "ShowToastMobile", nullptr, nullptr, sizeof(MobileNativeCodeBlueprint_eventShowToastMobile_Parms), Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMobileNativeCodeBlueprint_NoRegister()
	{
		return UMobileNativeCodeBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UMobileNativeCodeBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMobileNativeCodeBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MobileNativeCode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMobileNativeCodeBlueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMobileNativeCodeBlueprint_asyncHelloWorld, "asyncHelloWorld" }, // 15978294
		{ &Z_Construct_UFunction_UMobileNativeCodeBlueprint_DispatchGetter, "DispatchGetter" }, // 4254492477
		{ &Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleArray, "ExampleArray" }, // 4134574840
		{ &Z_Construct_UFunction_UMobileNativeCodeBlueprint_ExampleMyJavaObject, "ExampleMyJavaObject" }, // 1643841393
		{ &Z_Construct_UFunction_UMobileNativeCodeBlueprint_GetDeviceInfo, "GetDeviceInfo" }, // 740768321
		{ &Z_Construct_UFunction_UMobileNativeCodeBlueprint_HelloWorld, "HelloWorld" }, // 4129185409
		{ &Z_Construct_UFunction_UMobileNativeCodeBlueprint_OpenGallery, "OpenGallery" }, // 2609682706
		{ &Z_Construct_UFunction_UMobileNativeCodeBlueprint_ShowToastMobile, "ShowToastMobile" }, // 1651444367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMobileNativeCodeBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//~~~~~~~~~~~~~~~~~~~~~~~~~~~ end 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "IncludePath", "MobileNativeCodeBlueprint.h" },
		{ "ModuleRelativePath", "Public/MobileNativeCodeBlueprint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMobileNativeCodeBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMobileNativeCodeBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMobileNativeCodeBlueprint_Statics::ClassParams = {
		&UMobileNativeCodeBlueprint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMobileNativeCodeBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMobileNativeCodeBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMobileNativeCodeBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMobileNativeCodeBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMobileNativeCodeBlueprint, 3630323526);
	template<> MOBILENATIVECODE_API UClass* StaticClass<UMobileNativeCodeBlueprint>()
	{
		return UMobileNativeCodeBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMobileNativeCodeBlueprint(Z_Construct_UClass_UMobileNativeCodeBlueprint, &UMobileNativeCodeBlueprint::StaticClass, TEXT("/Script/MobileNativeCode"), TEXT("UMobileNativeCodeBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMobileNativeCodeBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
