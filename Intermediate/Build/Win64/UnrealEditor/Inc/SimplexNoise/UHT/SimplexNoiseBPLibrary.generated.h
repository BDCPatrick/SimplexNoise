// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimplexNoiseBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRandomStream;
#ifdef SIMPLEXNOISE_SimplexNoiseBPLibrary_generated_h
#error "SimplexNoiseBPLibrary.generated.h already included, missing '#pragma once' in SimplexNoiseBPLibrary.h"
#endif
#define SIMPLEXNOISE_SimplexNoiseBPLibrary_generated_h

#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoint_Statics; \
	SIMPLEXNOISE_API static class UScriptStruct* StaticStruct();


template<> SIMPLEXNOISE_API UScriptStruct* StaticStruct<struct FPoint>();

#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTriangle_Statics; \
	SIMPLEXNOISE_API static class UScriptStruct* StaticStruct();


template<> SIMPLEXNOISE_API UScriptStruct* StaticStruct<struct FTriangle>();

#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNoiseCell_Statics; \
	SIMPLEXNOISE_API static class UScriptStruct* StaticStruct();


template<> SIMPLEXNOISE_API UScriptStruct* StaticStruct<struct FNoiseCell>();

#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_SPARSE_DATA
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSimplexNoise4D_EX); \
	DECLARE_FUNCTION(execGetSimplexNoise3D_EX); \
	DECLARE_FUNCTION(execGetSimplexNoise2D_EX); \
	DECLARE_FUNCTION(execGetSimplexNoise1D_EX); \
	DECLARE_FUNCTION(execSimplexNoiseInRange4D); \
	DECLARE_FUNCTION(execSimplexNoiseInRange3D); \
	DECLARE_FUNCTION(execSimplexNoiseInRange2D); \
	DECLARE_FUNCTION(execSimplexNoiseInRange1D); \
	DECLARE_FUNCTION(execSimplexNoiseScaled4D); \
	DECLARE_FUNCTION(execSimplexNoiseScaled3D); \
	DECLARE_FUNCTION(execSimplexNoiseScaled2D); \
	DECLARE_FUNCTION(execSimplexNoiseScaled1D); \
	DECLARE_FUNCTION(execSimplexNoise4D); \
	DECLARE_FUNCTION(execSimplexNoise3D); \
	DECLARE_FUNCTION(execSimplexNoise2D); \
	DECLARE_FUNCTION(execSimplexNoise1D); \
	DECLARE_FUNCTION(execsetNoiseFromStream); \
	DECLARE_FUNCTION(execsetNoiseSeed);


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_ACCESSORS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUSimplexNoiseBPLibrary(); \
	friend struct Z_Construct_UClass_USimplexNoiseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USimplexNoiseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimplexNoise"), NO_API) \
	DECLARE_SERIALIZER(USimplexNoiseBPLibrary)


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimplexNoiseBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimplexNoiseBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimplexNoiseBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimplexNoiseBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimplexNoiseBPLibrary(USimplexNoiseBPLibrary&&); \
	NO_API USimplexNoiseBPLibrary(const USimplexNoiseBPLibrary&); \
public: \
	NO_API virtual ~USimplexNoiseBPLibrary();


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_82_PROLOG
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_SPARSE_DATA \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_RPC_WRAPPERS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_ACCESSORS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_INCLASS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEXNOISE_API UClass* StaticClass<class USimplexNoiseBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_Subs_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
