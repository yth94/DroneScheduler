// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PYTHONEDITOR_PythonProjectItem_generated_h
#error "PythonProjectItem.generated.h already included, missing '#pragma once' in PythonProjectItem.h"
#endif
#define PYTHONEDITOR_PythonProjectItem_generated_h

#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_RPC_WRAPPERS
#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonProjectItem(); \
	friend struct Z_Construct_UClass_UPythonProjectItem_Statics; \
public: \
	DECLARE_CLASS(UPythonProjectItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonEditor"), NO_API) \
	DECLARE_SERIALIZER(UPythonProjectItem)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPythonProjectItem(); \
	friend struct Z_Construct_UClass_UPythonProjectItem_Statics; \
public: \
	DECLARE_CLASS(UPythonProjectItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonEditor"), NO_API) \
	DECLARE_SERIALIZER(UPythonProjectItem)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonProjectItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonProjectItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonProjectItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonProjectItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPythonProjectItem(UPythonProjectItem&&); \
	NO_API UPythonProjectItem(const UPythonProjectItem&); \
public:


#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonProjectItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPythonProjectItem(UPythonProjectItem&&); \
	NO_API UPythonProjectItem(const UPythonProjectItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonProjectItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonProjectItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonProjectItem)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_20_PROLOG
#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_RPC_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_INCLASS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PythonProjectItem."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONEDITOR_API UClass* StaticClass<class UPythonProjectItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Plugins_UnrealEnginePython_Source_PythonEditor_Private_PythonProjectItem_h


#define FOREACH_ENUM_EPYTHONPROJECTITEMTYPE(op) \
	op(EPythonProjectItemType::Project) \
	op(EPythonProjectItemType::Folder) \
	op(EPythonProjectItemType::File) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
