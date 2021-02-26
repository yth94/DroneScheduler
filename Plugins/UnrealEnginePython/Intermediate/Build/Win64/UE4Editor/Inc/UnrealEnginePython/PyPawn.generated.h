// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALENGINEPYTHON_PyPawn_generated_h
#error "PyPawn.generated.h already included, missing '#pragma once' in PyPawn.h"
#endif
#define UNREALENGINEPYTHON_PyPawn_generated_h

#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallPythonPawnMethodString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->CallPythonPawnMethodString(Z_Param_method_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonPawnMethodBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CallPythonPawnMethodBool(Z_Param_method_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonPawnMethod) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPythonPawnMethod(Z_Param_method_name); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallPythonPawnMethodString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->CallPythonPawnMethodString(Z_Param_method_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonPawnMethodBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CallPythonPawnMethodBool(Z_Param_method_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonPawnMethod) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPythonPawnMethod(Z_Param_method_name); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPyPawn(); \
	friend struct Z_Construct_UClass_APyPawn_Statics; \
public: \
	DECLARE_CLASS(APyPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(APyPawn)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPyPawn(); \
	friend struct Z_Construct_UClass_APyPawn_Statics; \
public: \
	DECLARE_CLASS(APyPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(APyPawn)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APyPawn(APyPawn&&); \
	NO_API APyPawn(const APyPawn&); \
public:


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APyPawn(APyPawn&&); \
	NO_API APyPawn(const APyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APyPawn)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_10_PROLOG
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_RPC_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_INCLASS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALENGINEPYTHON_API UClass* StaticClass<class APyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
