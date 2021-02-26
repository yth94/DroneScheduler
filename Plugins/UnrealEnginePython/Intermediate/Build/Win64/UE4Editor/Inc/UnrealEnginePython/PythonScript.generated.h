// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALENGINEPYTHON_PythonScript_generated_h
#error "PythonScript.generated.h already included, missing '#pragma once' in PythonScript.h"
#endif
#define UNREALENGINEPYTHON_PythonScript_generated_h

#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRun) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Run(); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRun) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Run(); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonScript(); \
	friend struct Z_Construct_UClass_UPythonScript_Statics; \
public: \
	DECLARE_CLASS(UPythonScript, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), UNREALENGINEPYTHON_API) \
	DECLARE_SERIALIZER(UPythonScript)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPythonScript(); \
	friend struct Z_Construct_UClass_UPythonScript_Statics; \
public: \
	DECLARE_CLASS(UPythonScript, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), UNREALENGINEPYTHON_API) \
	DECLARE_SERIALIZER(UPythonScript)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALENGINEPYTHON_API UPythonScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALENGINEPYTHON_API, UPythonScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALENGINEPYTHON_API UPythonScript(UPythonScript&&); \
	UNREALENGINEPYTHON_API UPythonScript(const UPythonScript&); \
public:


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALENGINEPYTHON_API UPythonScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALENGINEPYTHON_API UPythonScript(UPythonScript&&); \
	UNREALENGINEPYTHON_API UPythonScript(const UPythonScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALENGINEPYTHON_API, UPythonScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonScript); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonScript)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_7_PROLOG
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_RPC_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_INCLASS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALENGINEPYTHON_API UClass* StaticClass<class UPythonScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
