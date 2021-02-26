// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALENGINEPYTHON_PyActor_generated_h
#error "PyActor.generated.h already included, missing '#pragma once' in PyActor.h"
#endif
#define UNREALENGINEPYTHON_PyActor_generated_h

#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallPythonActorMethodString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->CallPythonActorMethodString(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonActorMethodBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CallPythonActorMethodBool(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonActorMethod) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPythonActorMethod(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallPythonActorMethodString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->CallPythonActorMethodString(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonActorMethodBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CallPythonActorMethodBool(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonActorMethod) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPythonActorMethod(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPyActor(); \
	friend struct Z_Construct_UClass_APyActor_Statics; \
public: \
	DECLARE_CLASS(APyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(APyActor)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPyActor(); \
	friend struct Z_Construct_UClass_APyActor_Statics; \
public: \
	DECLARE_CLASS(APyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(APyActor)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APyActor(APyActor&&); \
	NO_API APyActor(const APyActor&); \
public:


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APyActor(APyActor&&); \
	NO_API APyActor(const APyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APyActor)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_10_PROLOG
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_RPC_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_INCLASS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALENGINEPYTHON_API UClass* StaticClass<class APyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
