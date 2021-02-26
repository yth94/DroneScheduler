// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PythonConsole/Public/PyFbxFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyFbxFactory() {}
// Cross Module References
	PYTHONCONSOLE_API UClass* Z_Construct_UClass_UPyFbxFactory_NoRegister();
	PYTHONCONSOLE_API UClass* Z_Construct_UClass_UPyFbxFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFbxFactory();
	UPackage* Z_Construct_UPackage__Script_PythonConsole();
// End Cross Module References
	void UPyFbxFactory::StaticRegisterNativesUPyFbxFactory()
	{
	}
	UClass* Z_Construct_UClass_UPyFbxFactory_NoRegister()
	{
		return UPyFbxFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPyFbxFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyFbxFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonConsole,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyFbxFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "PyFbxFactory.h" },
		{ "ModuleRelativePath", "Public/PyFbxFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyFbxFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyFbxFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPyFbxFactory_Statics::ClassParams = {
		&UPyFbxFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPyFbxFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPyFbxFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyFbxFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPyFbxFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPyFbxFactory, 316929572);
	template<> PYTHONCONSOLE_API UClass* StaticClass<UPyFbxFactory>()
	{
		return UPyFbxFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPyFbxFactory(Z_Construct_UClass_UPyFbxFactory, &UPyFbxFactory::StaticClass, TEXT("/Script/PythonConsole"), TEXT("UPyFbxFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyFbxFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
