// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PythonEditor/Private/PythonEditorCustomization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonEditorCustomization() {}
// Cross Module References
	PYTHONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FControlCustomization();
	UPackage* Z_Construct_UPackage__Script_PythonEditor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PYTHONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTextCustomization();
	PYTHONEDITOR_API UClass* Z_Construct_UClass_UPythonEditorCustomization_NoRegister();
	PYTHONEDITOR_API UClass* Z_Construct_UClass_UPythonEditorCustomization();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FControlCustomization::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PYTHONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FControlCustomization_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlCustomization, Z_Construct_UPackage__Script_PythonEditor(), TEXT("ControlCustomization"), sizeof(FControlCustomization), Get_Z_Construct_UScriptStruct_FControlCustomization_Hash());
	}
	return Singleton;
}
template<> PYTHONEDITOR_API UScriptStruct* StaticStruct<FControlCustomization>()
{
	return FControlCustomization::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FControlCustomization(FControlCustomization::StaticStruct, TEXT("/Script/PythonEditor"), TEXT("ControlCustomization"), false, nullptr, nullptr);
static struct FScriptStruct_PythonEditor_StaticRegisterNativesFControlCustomization
{
	FScriptStruct_PythonEditor_StaticRegisterNativesFControlCustomization()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ControlCustomization")),new UScriptStruct::TCppStructOps<FControlCustomization>);
	}
} ScriptStruct_PythonEditor_StaticRegisterNativesFControlCustomization;
	struct Z_Construct_UScriptStruct_FControlCustomization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlCustomization_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PythonEditorCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlCustomization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlCustomization>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlCustomization_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Private/PythonEditorCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlCustomization_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControlCustomization, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlCustomization_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FControlCustomization_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlCustomization_Statics::NewProp_Color,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlCustomization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PythonEditor,
		nullptr,
		&NewStructOps,
		"ControlCustomization",
		sizeof(FControlCustomization),
		alignof(FControlCustomization),
		Z_Construct_UScriptStruct_FControlCustomization_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FControlCustomization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlCustomization_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FControlCustomization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlCustomization()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FControlCustomization_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PythonEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ControlCustomization"), sizeof(FControlCustomization), Get_Z_Construct_UScriptStruct_FControlCustomization_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FControlCustomization_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FControlCustomization_Hash() { return 1097521510U; }
class UScriptStruct* FTextCustomization::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PYTHONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FTextCustomization_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextCustomization, Z_Construct_UPackage__Script_PythonEditor(), TEXT("TextCustomization"), sizeof(FTextCustomization), Get_Z_Construct_UScriptStruct_FTextCustomization_Hash());
	}
	return Singleton;
}
template<> PYTHONEDITOR_API UScriptStruct* StaticStruct<FTextCustomization>()
{
	return FTextCustomization::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextCustomization(FTextCustomization::StaticStruct, TEXT("/Script/PythonEditor"), TEXT("TextCustomization"), false, nullptr, nullptr);
static struct FScriptStruct_PythonEditor_StaticRegisterNativesFTextCustomization
{
	FScriptStruct_PythonEditor_StaticRegisterNativesFTextCustomization()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TextCustomization")),new UScriptStruct::TCppStructOps<FTextCustomization>);
	}
} ScriptStruct_PythonEditor_StaticRegisterNativesFTextCustomization;
	struct Z_Construct_UScriptStruct_FTextCustomization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Font;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextCustomization_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PythonEditorCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextCustomization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextCustomization>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextCustomization_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Private/PythonEditorCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextCustomization_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextCustomization, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextCustomization_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextCustomization_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextCustomization_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Private/PythonEditorCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextCustomization_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextCustomization, Font), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextCustomization_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextCustomization_Statics::NewProp_Font_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextCustomization_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextCustomization_Statics::NewProp_Font,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextCustomization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PythonEditor,
		nullptr,
		&NewStructOps,
		"TextCustomization",
		sizeof(FTextCustomization),
		alignof(FTextCustomization),
		Z_Construct_UScriptStruct_FTextCustomization_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTextCustomization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextCustomization_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextCustomization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextCustomization()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextCustomization_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PythonEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextCustomization"), sizeof(FTextCustomization), Get_Z_Construct_UScriptStruct_FTextCustomization_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTextCustomization_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextCustomization_Hash() { return 2360715522U; }
	void UPythonEditorCustomization::StaticRegisterNativesUPythonEditorCustomization()
	{
	}
	UClass* Z_Construct_UClass_UPythonEditorCustomization_NoRegister()
	{
		return UPythonEditorCustomization::StaticClass();
	}
	struct Z_Construct_UClass_UPythonEditorCustomization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Text_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Controls;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Controls_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonEditorCustomization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonEditorCustomization_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PythonEditorCustomization.h" },
		{ "ModuleRelativePath", "Private/PythonEditorCustomization.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Private/PythonEditorCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPythonEditorCustomization, Text), METADATA_PARAMS(Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Text_Inner = { "Text", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTextCustomization, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Controls_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Private/PythonEditorCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Controls = { "Controls", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPythonEditorCustomization, Controls), METADATA_PARAMS(Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Controls_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Controls_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Controls_Inner = { "Controls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FControlCustomization, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPythonEditorCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Text_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Controls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonEditorCustomization_Statics::NewProp_Controls_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonEditorCustomization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonEditorCustomization>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPythonEditorCustomization_Statics::ClassParams = {
		&UPythonEditorCustomization::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPythonEditorCustomization_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPythonEditorCustomization_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonEditorCustomization_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPythonEditorCustomization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonEditorCustomization()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPythonEditorCustomization_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPythonEditorCustomization, 2015045981);
	template<> PYTHONEDITOR_API UClass* StaticClass<UPythonEditorCustomization>()
	{
		return UPythonEditorCustomization::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPythonEditorCustomization(Z_Construct_UClass_UPythonEditorCustomization, &UPythonEditorCustomization::StaticClass, TEXT("/Script/PythonEditor"), TEXT("UPythonEditorCustomization"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonEditorCustomization);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
