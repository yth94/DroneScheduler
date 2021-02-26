// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEnginePython/Public/PythonBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonBlueprintFunctionLibrary() {}
// Cross Module References
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPythonBlueprintFunctionLibrary_NoRegister();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPythonBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UnrealEnginePython();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString();
// End Cross Module References
	void UPythonBlueprintFunctionLibrary::StaticRegisterNativesUPythonBlueprintFunctionLibrary()
	{
		UClass* Class = UPythonBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecutePythonScript", &UPythonBlueprintFunctionLibrary::execExecutePythonScript },
			{ "ExecutePythonString", &UPythonBlueprintFunctionLibrary::execExecutePythonString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript_Statics
	{
		struct PythonBlueprintFunctionLibrary_eventExecutePythonScript_Parms
		{
			FString script;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_script;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript_Statics::NewProp_script = { "script", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonBlueprintFunctionLibrary_eventExecutePythonScript_Parms, script), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript_Statics::NewProp_script,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonBlueprintFunctionLibrary, nullptr, "ExecutePythonScript", nullptr, nullptr, sizeof(PythonBlueprintFunctionLibrary_eventExecutePythonScript_Parms), Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics
	{
		struct PythonBlueprintFunctionLibrary_eventExecutePythonString_Parms
		{
			FString PythonCmd;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PythonCmd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PythonCmd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::NewProp_PythonCmd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::NewProp_PythonCmd = { "PythonCmd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonBlueprintFunctionLibrary_eventExecutePythonString_Parms, PythonCmd), METADATA_PARAMS(Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::NewProp_PythonCmd_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::NewProp_PythonCmd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::NewProp_PythonCmd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonBlueprintFunctionLibrary, nullptr, "ExecutePythonString", nullptr, nullptr, sizeof(PythonBlueprintFunctionLibrary_eventExecutePythonString_Parms), Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPythonBlueprintFunctionLibrary_NoRegister()
	{
		return UPythonBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPythonBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPythonBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonScript, "ExecutePythonScript" }, // 105173720
		{ &Z_Construct_UFunction_UPythonBlueprintFunctionLibrary_ExecutePythonString, "ExecutePythonString" }, // 116092456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PythonBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/PythonBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPythonBlueprintFunctionLibrary_Statics::ClassParams = {
		&UPythonBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonBlueprintFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPythonBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPythonBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPythonBlueprintFunctionLibrary, 1164282190);
	template<> UNREALENGINEPYTHON_API UClass* StaticClass<UPythonBlueprintFunctionLibrary>()
	{
		return UPythonBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPythonBlueprintFunctionLibrary(Z_Construct_UClass_UPythonBlueprintFunctionLibrary, &UPythonBlueprintFunctionLibrary::StaticClass, TEXT("/Script/UnrealEnginePython"), TEXT("UPythonBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
