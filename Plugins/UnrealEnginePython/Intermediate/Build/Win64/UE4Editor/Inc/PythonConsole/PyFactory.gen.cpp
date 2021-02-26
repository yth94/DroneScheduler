// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PythonConsole/Public/PyFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyFactory() {}
// Cross Module References
	PYTHONCONSOLE_API UClass* Z_Construct_UClass_UPyFactory_NoRegister();
	PYTHONCONSOLE_API UClass* Z_Construct_UClass_UPyFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PythonConsole();
	PYTHONCONSOLE_API UFunction* Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PYTHONCONSOLE_API UFunction* Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew();
	PYTHONCONSOLE_API UFunction* Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass();
// End Cross Module References
	static FName NAME_UPyFactory_PyFactoryCreateFile = FName(TEXT("PyFactoryCreateFile"));
	UObject* UPyFactory::PyFactoryCreateFile(UClass* Class, UObject* InParent, const FString& InName, const FString& Filename)
	{
		PyFactory_eventPyFactoryCreateFile_Parms Parms;
		Parms.Class=Class;
		Parms.InParent=InParent;
		Parms.InName=InName;
		Parms.Filename=Filename;
		ProcessEvent(FindFunctionChecked(NAME_UPyFactory_PyFactoryCreateFile),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UPyFactory_PyFactoryCreateNew = FName(TEXT("PyFactoryCreateNew"));
	UObject* UPyFactory::PyFactoryCreateNew(UClass* Class, UObject* InParent, const FString& InName)
	{
		PyFactory_eventPyFactoryCreateNew_Parms Parms;
		Parms.Class=Class;
		Parms.InParent=InParent;
		Parms.InName=InName;
		ProcessEvent(FindFunctionChecked(NAME_UPyFactory_PyFactoryCreateNew),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UPyFactory_PyResolveSupportedClass = FName(TEXT("PyResolveSupportedClass"));
	UClass* UPyFactory::PyResolveSupportedClass()
	{
		PyFactory_eventPyResolveSupportedClass_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UPyFactory_PyResolveSupportedClass),&Parms);
		return Parms.ReturnValue;
	}
	void UPyFactory::StaticRegisterNativesUPyFactory()
	{
	}
	struct Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InParent;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyFactory_eventPyFactoryCreateFile_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyFactory_eventPyFactoryCreateFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyFactory_eventPyFactoryCreateFile_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_InName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_InName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyFactory_eventPyFactoryCreateFile_Parms, InParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyFactory_eventPyFactoryCreateFile_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_InName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_InParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PyFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyFactory, nullptr, "PyFactoryCreateFile", nullptr, nullptr, sizeof(PyFactory_eventPyFactoryCreateFile_Parms), Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InParent;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyFactory_eventPyFactoryCreateNew_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyFactory_eventPyFactoryCreateNew_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::NewProp_InName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::NewProp_InName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyFactory_eventPyFactoryCreateNew_Parms, InParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyFactory_eventPyFactoryCreateNew_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::NewProp_InName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::NewProp_InParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PyFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyFactory, nullptr, "PyFactoryCreateNew", nullptr, nullptr, sizeof(PyFactory_eventPyFactoryCreateNew_Parms), Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyFactory_eventPyResolveSupportedClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PyFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyFactory, nullptr, "PyResolveSupportedClass", nullptr, nullptr, sizeof(PyFactory_eventPyResolveSupportedClass_Parms), Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPyFactory_NoRegister()
	{
		return UPyFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PyToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PyToolTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PyDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PyDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonConsole,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPyFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPyFactory_PyFactoryCreateFile, "PyFactoryCreateFile" }, // 4083163426
		{ &Z_Construct_UFunction_UPyFactory_PyFactoryCreateNew, "PyFactoryCreateNew" }, // 2454626954
		{ &Z_Construct_UFunction_UPyFactory_PyResolveSupportedClass, "PyResolveSupportedClass" }, // 1324084834
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PyFactory.h" },
		{ "ModuleRelativePath", "Public/PyFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyFactory_Statics::NewProp_PyToolTip_MetaData[] = {
		{ "Category", "PyFactory" },
		{ "ModuleRelativePath", "Public/PyFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPyFactory_Statics::NewProp_PyToolTip = { "PyToolTip", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPyFactory, PyToolTip), METADATA_PARAMS(Z_Construct_UClass_UPyFactory_Statics::NewProp_PyToolTip_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPyFactory_Statics::NewProp_PyToolTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyFactory_Statics::NewProp_PyDisplayName_MetaData[] = {
		{ "Category", "PyFactory" },
		{ "ModuleRelativePath", "Public/PyFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPyFactory_Statics::NewProp_PyDisplayName = { "PyDisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPyFactory, PyDisplayName), METADATA_PARAMS(Z_Construct_UClass_UPyFactory_Statics::NewProp_PyDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPyFactory_Statics::NewProp_PyDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPyFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyFactory_Statics::NewProp_PyToolTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyFactory_Statics::NewProp_PyDisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPyFactory_Statics::ClassParams = {
		&UPyFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPyFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPyFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPyFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPyFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPyFactory, 4156070091);
	template<> PYTHONCONSOLE_API UClass* StaticClass<UPyFactory>()
	{
		return UPyFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPyFactory(Z_Construct_UClass_UPyFactory, &UPyFactory::StaticClass, TEXT("/Script/PythonConsole"), TEXT("UPyFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
