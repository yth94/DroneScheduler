// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEnginePython/Public/PyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyActor() {}
// Cross Module References
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_APyActor_NoRegister();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_APyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealEnginePython();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyActor_CallPythonActorMethod();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyActor_CallPythonActorMethodBool();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyActor_CallPythonActorMethodString();
// End Cross Module References
	void APyActor::StaticRegisterNativesAPyActor()
	{
		UClass* Class = APyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallPythonActorMethod", &APyActor::execCallPythonActorMethod },
			{ "CallPythonActorMethodBool", &APyActor::execCallPythonActorMethodBool },
			{ "CallPythonActorMethodString", &APyActor::execCallPythonActorMethodString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics
	{
		struct PyActor_eventCallPythonActorMethod_Parms
		{
			FString method_name;
			FString args;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyActor_eventCallPythonActorMethod_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyActor_eventCallPythonActorMethod_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyActor, nullptr, "CallPythonActorMethod", nullptr, nullptr, sizeof(PyActor_eventCallPythonActorMethod_Parms), Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyActor_CallPythonActorMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyActor_CallPythonActorMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics
	{
		struct PyActor_eventCallPythonActorMethodBool_Parms
		{
			FString method_name;
			FString args;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PyActor_eventCallPythonActorMethodBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PyActor_eventCallPythonActorMethodBool_Parms), &Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyActor_eventCallPythonActorMethodBool_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyActor_eventCallPythonActorMethodBool_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyActor, nullptr, "CallPythonActorMethodBool", nullptr, nullptr, sizeof(PyActor_eventCallPythonActorMethodBool_Parms), Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyActor_CallPythonActorMethodBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyActor_CallPythonActorMethodBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics
	{
		struct PyActor_eventCallPythonActorMethodString_Parms
		{
			FString method_name;
			FString args;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyActor_eventCallPythonActorMethodString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyActor_eventCallPythonActorMethodString_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyActor_eventCallPythonActorMethodString_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyActor, nullptr, "CallPythonActorMethodString", nullptr, nullptr, sizeof(PyActor_eventCallPythonActorMethodString_Parms), Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyActor_CallPythonActorMethodString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyActor_CallPythonActorMethodString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APyActor_NoRegister()
	{
		return APyActor::StaticClass();
	}
	struct Z_Construct_UClass_APyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PythonDisableAutoBinding_MetaData[];
#endif
		static void NewProp_PythonDisableAutoBinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PythonDisableAutoBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PythonTickForceDisabled_MetaData[];
#endif
		static void NewProp_PythonTickForceDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PythonTickForceDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PythonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PythonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PythonModule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PythonModule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APyActor_CallPythonActorMethod, "CallPythonActorMethod" }, // 575355673
		{ &Z_Construct_UFunction_APyActor_CallPythonActorMethodBool, "CallPythonActorMethodBool" }, // 1874071417
		{ &Z_Construct_UFunction_APyActor_CallPythonActorMethodString, "CallPythonActorMethodString" }, // 2672489278
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PyActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyActor_Statics::NewProp_PythonDisableAutoBinding_MetaData[] = {
		{ "Category", "Python" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/PyActor.h" },
	};
#endif
	void Z_Construct_UClass_APyActor_Statics::NewProp_PythonDisableAutoBinding_SetBit(void* Obj)
	{
		((APyActor*)Obj)->PythonDisableAutoBinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APyActor_Statics::NewProp_PythonDisableAutoBinding = { "PythonDisableAutoBinding", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APyActor), &Z_Construct_UClass_APyActor_Statics::NewProp_PythonDisableAutoBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_APyActor_Statics::NewProp_PythonDisableAutoBinding_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyActor_Statics::NewProp_PythonDisableAutoBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyActor_Statics::NewProp_PythonTickForceDisabled_MetaData[] = {
		{ "Category", "Python" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/PyActor.h" },
	};
#endif
	void Z_Construct_UClass_APyActor_Statics::NewProp_PythonTickForceDisabled_SetBit(void* Obj)
	{
		((APyActor*)Obj)->PythonTickForceDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APyActor_Statics::NewProp_PythonTickForceDisabled = { "PythonTickForceDisabled", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APyActor), &Z_Construct_UClass_APyActor_Statics::NewProp_PythonTickForceDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_APyActor_Statics::NewProp_PythonTickForceDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyActor_Statics::NewProp_PythonTickForceDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyActor_Statics::NewProp_PythonClass_MetaData[] = {
		{ "Category", "Python" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/PyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APyActor_Statics::NewProp_PythonClass = { "PythonClass", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyActor, PythonClass), METADATA_PARAMS(Z_Construct_UClass_APyActor_Statics::NewProp_PythonClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyActor_Statics::NewProp_PythonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyActor_Statics::NewProp_PythonModule_MetaData[] = {
		{ "Category", "Python" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/PyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APyActor_Statics::NewProp_PythonModule = { "PythonModule", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyActor, PythonModule), METADATA_PARAMS(Z_Construct_UClass_APyActor_Statics::NewProp_PythonModule_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyActor_Statics::NewProp_PythonModule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyActor_Statics::NewProp_PythonDisableAutoBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyActor_Statics::NewProp_PythonTickForceDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyActor_Statics::NewProp_PythonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyActor_Statics::NewProp_PythonModule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APyActor_Statics::ClassParams = {
		&APyActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APyActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APyActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APyActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APyActor, 906219730);
	template<> UNREALENGINEPYTHON_API UClass* StaticClass<APyActor>()
	{
		return APyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APyActor(Z_Construct_UClass_APyActor, &APyActor::StaticClass, TEXT("/Script/UnrealEnginePython"), TEXT("APyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
