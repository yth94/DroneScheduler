// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALENGINEPYTHON_PyUserWidget_generated_h
#error "PyUserWidget.generated.h already included, missing '#pragma once' in PyUserWidget.h"
#endif
#define UNREALENGINEPYTHON_PyUserWidget_generated_h

#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallPythonUserWidgetMethod) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPythonUserWidgetMethod(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallPythonUserWidgetMethod) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPythonUserWidgetMethod(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyUserWidget(); \
	friend struct Z_Construct_UClass_UPyUserWidget_Statics; \
public: \
	DECLARE_CLASS(UPyUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(UPyUserWidget)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPyUserWidget(); \
	friend struct Z_Construct_UClass_UPyUserWidget_Statics; \
public: \
	DECLARE_CLASS(UPyUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(UPyUserWidget)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyUserWidget(UPyUserWidget&&); \
	NO_API UPyUserWidget(const UPyUserWidget&); \
public:


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyUserWidget(UPyUserWidget&&); \
	NO_API UPyUserWidget(const UPyUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyUserWidget)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_16_PROLOG
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_RPC_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_INCLASS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALENGINEPYTHON_API UClass* StaticClass<class UPyUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
