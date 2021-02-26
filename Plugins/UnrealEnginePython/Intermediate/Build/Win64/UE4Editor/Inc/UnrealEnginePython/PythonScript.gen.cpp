// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEnginePython/Public/PythonScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonScript() {}
// Cross Module References
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPythonScript_NoRegister();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPythonScript();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEnginePython();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonScript_Run();
// End Cross Module References
	void UPythonScript::StaticRegisterNativesUPythonScript()
	{
		UClass* Class = UPythonScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Run", &UPythonScript::execRun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPythonScript_Run_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonScript_Run_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PythonScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonScript_Run_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonScript, nullptr, "Run", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonScript_Run_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonScript_Run_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonScript_Run()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonScript_Run_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPythonScript_NoRegister()
	{
		return UPythonScript::StaticClass();
	}
	struct Z_Construct_UClass_UPythonScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionArgs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionArgs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionToCall_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionToCall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScriptPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPythonScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPythonScript_Run, "Run" }, // 1254637562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PythonScript.h" },
		{ "ModuleRelativePath", "Public/PythonScript.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScript_Statics::NewProp_FunctionArgs_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonScript.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPythonScript_Statics::NewProp_FunctionArgs = { "FunctionArgs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPythonScript, FunctionArgs), METADATA_PARAMS(Z_Construct_UClass_UPythonScript_Statics::NewProp_FunctionArgs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonScript_Statics::NewProp_FunctionArgs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPythonScript_Statics::NewProp_FunctionArgs_Inner = { "FunctionArgs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScript_Statics::NewProp_FunctionToCall_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonScript.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPythonScript_Statics::NewProp_FunctionToCall = { "FunctionToCall", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPythonScript, FunctionToCall), METADATA_PARAMS(Z_Construct_UClass_UPythonScript_Statics::NewProp_FunctionToCall_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonScript_Statics::NewProp_FunctionToCall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScript_Statics::NewProp_ScriptPath_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonScript.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPythonScript_Statics::NewProp_ScriptPath = { "ScriptPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPythonScript, ScriptPath), METADATA_PARAMS(Z_Construct_UClass_UPythonScript_Statics::NewProp_ScriptPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonScript_Statics::NewProp_ScriptPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPythonScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScript_Statics::NewProp_FunctionArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScript_Statics::NewProp_FunctionArgs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScript_Statics::NewProp_FunctionToCall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScript_Statics::NewProp_ScriptPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPythonScript_Statics::ClassParams = {
		&UPythonScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPythonScript_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPythonScript_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonScript_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPythonScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPythonScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPythonScript, 1826906576);
	template<> UNREALENGINEPYTHON_API UClass* StaticClass<UPythonScript>()
	{
		return UPythonScript::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPythonScript(Z_Construct_UClass_UPythonScript, &UPythonScript::StaticClass, TEXT("/Script/UnrealEnginePython"), TEXT("UPythonScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
