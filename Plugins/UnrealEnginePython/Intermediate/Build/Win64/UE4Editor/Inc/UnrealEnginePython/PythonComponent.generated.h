// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FRotator;
struct FVector;
 
#ifdef UNREALENGINEPYTHON_PythonComponent_generated_h
#error "PythonComponent.generated.h already included, missing '#pragma once' in PythonComponent.h"
#endif
#define UNREALENGINEPYTHON_PythonComponent_generated_h

#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPythonAttrObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrObject(Z_Param_attr,Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrRotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrRotator(Z_Param_attr,Z_Param_Rotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_STRUCT(FVector,Z_Param_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrVector(Z_Param_attr,Z_Param_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_UBOOL(Z_Param_Boolean); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrBool(Z_Param_attr,Z_Param_Boolean); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrString(Z_Param_attr,Z_Param_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Float); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrFloat(Z_Param_attr,Z_Param_Float); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Integer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrInt(Z_Param_attr,Z_Param_Integer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_OBJECT(UObject,Z_Param_arg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->CallPythonComponentMethodObject(Z_Param_method_name,Z_Param_arg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->CallPythonComponentMethodInt(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CallPythonComponentMethodFloat(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_output_strings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPythonComponentMethodStringArray(Z_Param_method_name,Z_Param_args,Z_Param_Out_output_strings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->CallPythonComponentMethodMap(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->CallPythonComponentMethodString(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CallPythonComponentMethodBool(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethod) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPythonComponentMethod(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializePythonComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializePythonComponent(); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPythonAttrObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrObject(Z_Param_attr,Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrRotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrRotator(Z_Param_attr,Z_Param_Rotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_STRUCT(FVector,Z_Param_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrVector(Z_Param_attr,Z_Param_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_UBOOL(Z_Param_Boolean); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrBool(Z_Param_attr,Z_Param_Boolean); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrString(Z_Param_attr,Z_Param_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Float); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrFloat(Z_Param_attr,Z_Param_Float); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Integer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrInt(Z_Param_attr,Z_Param_Integer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_OBJECT(UObject,Z_Param_arg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->CallPythonComponentMethodObject(Z_Param_method_name,Z_Param_arg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->CallPythonComponentMethodInt(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CallPythonComponentMethodFloat(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_output_strings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPythonComponentMethodStringArray(Z_Param_method_name,Z_Param_args,Z_Param_Out_output_strings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->CallPythonComponentMethodMap(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->CallPythonComponentMethodString(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethodBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CallPythonComponentMethodBool(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonComponentMethod) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPythonComponentMethod(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializePythonComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializePythonComponent(); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonComponent(); \
	friend struct Z_Construct_UClass_UPythonComponent_Statics; \
public: \
	DECLARE_CLASS(UPythonComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(UPythonComponent)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPythonComponent(); \
	friend struct Z_Construct_UClass_UPythonComponent_Statics; \
public: \
	DECLARE_CLASS(UPythonComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(UPythonComponent)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPythonComponent(UPythonComponent&&); \
	NO_API UPythonComponent(const UPythonComponent&); \
public:


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPythonComponent(UPythonComponent&&); \
	NO_API UPythonComponent(const UPythonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPythonComponent)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_9_PROLOG
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_RPC_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_INCLASS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALENGINEPYTHON_API UClass* StaticClass<class UPythonComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
