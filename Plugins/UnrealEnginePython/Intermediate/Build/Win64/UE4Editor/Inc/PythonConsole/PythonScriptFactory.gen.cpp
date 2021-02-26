// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PythonConsole/Public/PythonScriptFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonScriptFactory() {}
// Cross Module References
	PYTHONCONSOLE_API UClass* Z_Construct_UClass_UPythonScriptFactory_NoRegister();
	PYTHONCONSOLE_API UClass* Z_Construct_UClass_UPythonScriptFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PythonConsole();
// End Cross Module References
	void UPythonScriptFactory::StaticRegisterNativesUPythonScriptFactory()
	{
	}
	UClass* Z_Construct_UClass_UPythonScriptFactory_NoRegister()
	{
		return UPythonScriptFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPythonScriptFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonScriptFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonConsole,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PythonScriptFactory.h" },
		{ "ModuleRelativePath", "Public/PythonScriptFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonScriptFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonScriptFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPythonScriptFactory_Statics::ClassParams = {
		&UPythonScriptFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonScriptFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPythonScriptFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonScriptFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPythonScriptFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPythonScriptFactory, 2874861352);
	template<> PYTHONCONSOLE_API UClass* StaticClass<UPythonScriptFactory>()
	{
		return UPythonScriptFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPythonScriptFactory(Z_Construct_UClass_UPythonScriptFactory, &UPythonScriptFactory::StaticClass, TEXT("/Script/PythonConsole"), TEXT("UPythonScriptFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonScriptFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
