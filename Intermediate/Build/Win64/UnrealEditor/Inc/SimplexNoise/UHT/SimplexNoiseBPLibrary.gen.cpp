// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplexNoise/Public/SimplexNoiseBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplexNoiseBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SIMPLEXNOISE_API UClass* Z_Construct_UClass_USimplexNoiseBPLibrary();
SIMPLEXNOISE_API UClass* Z_Construct_UClass_USimplexNoiseBPLibrary_NoRegister();
SIMPLEXNOISE_API UScriptStruct* Z_Construct_UScriptStruct_FNoiseCell();
SIMPLEXNOISE_API UScriptStruct* Z_Construct_UScriptStruct_FPoint();
SIMPLEXNOISE_API UScriptStruct* Z_Construct_UScriptStruct_FTriangle();
UPackage* Z_Construct_UPackage__Script_SimplexNoise();
// End Cross Module References

// Begin ScriptStruct FPoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Point;
class UScriptStruct* FPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Point.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Point.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoint, (UObject*)Z_Construct_UPackage__Script_SimplexNoise(), TEXT("Point"));
	}
	return Z_Registration_Info_UScriptStruct_Point.OuterSingleton;
}
template<> SIMPLEXNOISE_API UScriptStruct* StaticStruct<FPoint>()
{
	return FPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoint_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoint, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoint_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoint, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoint_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoint, z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_z_MetaData), NewProp_z_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoint_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoint_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoint_Statics::NewProp_z,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimplexNoise,
	nullptr,
	&NewStructOps,
	"Point",
	Z_Construct_UScriptStruct_FPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoint_Statics::PropPointers),
	sizeof(FPoint),
	alignof(FPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPoint()
{
	if (!Z_Registration_Info_UScriptStruct_Point.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Point.InnerSingleton, Z_Construct_UScriptStruct_FPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Point.InnerSingleton;
}
// End ScriptStruct FPoint

// Begin ScriptStruct FTriangle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Triangle;
class UScriptStruct* FTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Triangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Triangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriangle, (UObject*)Z_Construct_UPackage__Script_SimplexNoise(), TEXT("Triangle"));
	}
	return Z_Registration_Info_UScriptStruct_Triangle.OuterSingleton;
}
template<> SIMPLEXNOISE_API UScriptStruct* StaticStruct<FTriangle>()
{
	return FTriangle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTriangle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_point_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_point_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_point;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriangle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriangle_Statics::NewProp_point_Inner = { "point", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoint, METADATA_PARAMS(0, nullptr) }; // 3141991188
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTriangle_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriangle, point), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_point_MetaData), NewProp_point_MetaData) }; // 3141991188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangle_Statics::NewProp_point_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangle_Statics::NewProp_point,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriangle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimplexNoise,
	nullptr,
	&NewStructOps,
	"Triangle",
	Z_Construct_UScriptStruct_FTriangle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangle_Statics::PropPointers),
	sizeof(FTriangle),
	alignof(FTriangle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTriangle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTriangle()
{
	if (!Z_Registration_Info_UScriptStruct_Triangle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Triangle.InnerSingleton, Z_Construct_UScriptStruct_FTriangle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Triangle.InnerSingleton;
}
// End ScriptStruct FTriangle

// Begin ScriptStruct FNoiseCell
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NoiseCell;
class UScriptStruct* FNoiseCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NoiseCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NoiseCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoiseCell, (UObject*)Z_Construct_UPackage__Script_SimplexNoise(), TEXT("NoiseCell"));
	}
	return Z_Registration_Info_UScriptStruct_NoiseCell.OuterSingleton;
}
template<> SIMPLEXNOISE_API UScriptStruct* StaticStruct<FNoiseCell>()
{
	return FNoiseCell::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNoiseCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_point_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_val_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_point_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_point;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_val_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoiseCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNoiseCell_Statics::NewProp_point_Inner = { "point", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoint, METADATA_PARAMS(0, nullptr) }; // 3141991188
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNoiseCell_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNoiseCell, point), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_point_MetaData), NewProp_point_MetaData) }; // 3141991188
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseCell_Statics::NewProp_val_Inner = { "val", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNoiseCell_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNoiseCell, val), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_val_MetaData), NewProp_val_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoiseCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseCell_Statics::NewProp_point_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseCell_Statics::NewProp_point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseCell_Statics::NewProp_val_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseCell_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoiseCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimplexNoise,
	nullptr,
	&NewStructOps,
	"NoiseCell",
	Z_Construct_UScriptStruct_FNoiseCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseCell_Statics::PropPointers),
	sizeof(FNoiseCell),
	alignof(FNoiseCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNoiseCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNoiseCell()
{
	if (!Z_Registration_Info_UScriptStruct_NoiseCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NoiseCell.InnerSingleton, Z_Construct_UScriptStruct_FNoiseCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NoiseCell.InnerSingleton;
}
// End ScriptStruct FNoiseCell

// Begin Class USimplexNoiseBPLibrary Function GetSimplexNoise1D_EX
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics
{
	struct SimplexNoiseBPLibrary_eventGetSimplexNoise1D_EX_Parms
	{
		float x;
		float lacunarity;
		float persistance;
		int32 octaves;
		float inFactor;
		bool ZeroToOne;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "CPP_Default_lacunarity", "2.300000" },
		{ "CPP_Default_octaves", "4" },
		{ "CPP_Default_persistance", "0.600000" },
		{ "CPP_Default_ZeroToOne", "false" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_persistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_octaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static void NewProp_ZeroToOne_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ZeroToOne;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise1D_EX_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise1D_EX_Parms, lacunarity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_persistance = { "persistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise1D_EX_Parms, persistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise1D_EX_Parms, octaves), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise1D_EX_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_ZeroToOne_SetBit(void* Obj)
{
	((SimplexNoiseBPLibrary_eventGetSimplexNoise1D_EX_Parms*)Obj)->ZeroToOne = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_ZeroToOne = { "ZeroToOne", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimplexNoiseBPLibrary_eventGetSimplexNoise1D_EX_Parms), &Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_ZeroToOne_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise1D_EX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_persistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_octaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_ZeroToOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "GetSimplexNoise1D_EX", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::SimplexNoiseBPLibrary_eventGetSimplexNoise1D_EX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::SimplexNoiseBPLibrary_eventGetSimplexNoise1D_EX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execGetSimplexNoise1D_EX)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_persistance);
	P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_GET_UBOOL(Z_Param_ZeroToOne);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::GetSimplexNoise1D_EX(Z_Param_x,Z_Param_lacunarity,Z_Param_persistance,Z_Param_octaves,Z_Param_inFactor,Z_Param_ZeroToOne);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function GetSimplexNoise1D_EX

// Begin Class USimplexNoiseBPLibrary Function GetSimplexNoise2D_EX
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics
{
	struct SimplexNoiseBPLibrary_eventGetSimplexNoise2D_EX_Parms
	{
		float x;
		float y;
		float lacunarity;
		float persistance;
		int32 octaves;
		float inFactor;
		bool ZeroToOne;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "CPP_Default_lacunarity", "2.300000" },
		{ "CPP_Default_octaves", "4" },
		{ "CPP_Default_persistance", "0.600000" },
		{ "CPP_Default_ZeroToOne", "false" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_persistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_octaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static void NewProp_ZeroToOne_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ZeroToOne;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise2D_EX_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise2D_EX_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise2D_EX_Parms, lacunarity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_persistance = { "persistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise2D_EX_Parms, persistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise2D_EX_Parms, octaves), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise2D_EX_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_ZeroToOne_SetBit(void* Obj)
{
	((SimplexNoiseBPLibrary_eventGetSimplexNoise2D_EX_Parms*)Obj)->ZeroToOne = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_ZeroToOne = { "ZeroToOne", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimplexNoiseBPLibrary_eventGetSimplexNoise2D_EX_Parms), &Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_ZeroToOne_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise2D_EX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_persistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_octaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_ZeroToOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "GetSimplexNoise2D_EX", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::SimplexNoiseBPLibrary_eventGetSimplexNoise2D_EX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::SimplexNoiseBPLibrary_eventGetSimplexNoise2D_EX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execGetSimplexNoise2D_EX)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_persistance);
	P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_GET_UBOOL(Z_Param_ZeroToOne);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(Z_Param_x,Z_Param_y,Z_Param_lacunarity,Z_Param_persistance,Z_Param_octaves,Z_Param_inFactor,Z_Param_ZeroToOne);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function GetSimplexNoise2D_EX

// Begin Class USimplexNoiseBPLibrary Function GetSimplexNoise3D_EX
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics
{
	struct SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms
	{
		float x;
		float y;
		float z;
		float lacunarity;
		float persistance;
		int32 octaves;
		float inFactor;
		bool ZeroToOne;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "CPP_Default_lacunarity", "2.300000" },
		{ "CPP_Default_octaves", "4" },
		{ "CPP_Default_persistance", "0.600000" },
		{ "CPP_Default_ZeroToOne", "false" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_persistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_octaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static void NewProp_ZeroToOne_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ZeroToOne;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms, lacunarity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_persistance = { "persistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms, persistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms, octaves), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_ZeroToOne_SetBit(void* Obj)
{
	((SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms*)Obj)->ZeroToOne = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_ZeroToOne = { "ZeroToOne", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms), &Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_ZeroToOne_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_persistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_octaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_ZeroToOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "GetSimplexNoise3D_EX", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::SimplexNoiseBPLibrary_eventGetSimplexNoise3D_EX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execGetSimplexNoise3D_EX)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_persistance);
	P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_GET_UBOOL(Z_Param_ZeroToOne);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::GetSimplexNoise3D_EX(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_lacunarity,Z_Param_persistance,Z_Param_octaves,Z_Param_inFactor,Z_Param_ZeroToOne);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function GetSimplexNoise3D_EX

// Begin Class USimplexNoiseBPLibrary Function GetSimplexNoise4D_EX
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics
{
	struct SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms
	{
		float x;
		float y;
		float z;
		float w;
		float lacunarity;
		float persistance;
		int32 octaves;
		float inFactor;
		bool ZeroToOne;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "CPP_Default_lacunarity", "2.300000" },
		{ "CPP_Default_octaves", "4" },
		{ "CPP_Default_persistance", "0.600000" },
		{ "CPP_Default_ZeroToOne", "false" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_persistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_octaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static void NewProp_ZeroToOne_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ZeroToOne;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms, w), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms, lacunarity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_persistance = { "persistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms, persistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms, octaves), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_ZeroToOne_SetBit(void* Obj)
{
	((SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms*)Obj)->ZeroToOne = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_ZeroToOne = { "ZeroToOne", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms), &Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_ZeroToOne_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_w,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_persistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_octaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_ZeroToOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "GetSimplexNoise4D_EX", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::SimplexNoiseBPLibrary_eventGetSimplexNoise4D_EX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execGetSimplexNoise4D_EX)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_w);
	P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_persistance);
	P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_GET_UBOOL(Z_Param_ZeroToOne);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::GetSimplexNoise4D_EX(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_lacunarity,Z_Param_persistance,Z_Param_octaves,Z_Param_inFactor,Z_Param_ZeroToOne);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function GetSimplexNoise4D_EX

// Begin Class USimplexNoiseBPLibrary Function setNoiseFromStream
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics
{
	struct SimplexNoiseBPLibrary_eventsetNoiseFromStream_Parms
	{
		FRandomStream RandStream;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandStream;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics::NewProp_RandStream = { "RandStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventsetNoiseFromStream_Parms, RandStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics::NewProp_RandStream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "setNoiseFromStream", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics::SimplexNoiseBPLibrary_eventsetNoiseFromStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics::SimplexNoiseBPLibrary_eventsetNoiseFromStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execsetNoiseFromStream)
{
	P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandStream);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimplexNoiseBPLibrary::setNoiseFromStream(Z_Param_Out_RandStream);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function setNoiseFromStream

// Begin Class USimplexNoiseBPLibrary Function setNoiseSeed
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics
{
	struct SimplexNoiseBPLibrary_eventsetNoiseSeed_Parms
	{
		int32 newSeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_newSeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_newSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics::NewProp_newSeed = { "newSeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventsetNoiseSeed_Parms, newSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_newSeed_MetaData), NewProp_newSeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics::NewProp_newSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "setNoiseSeed", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics::SimplexNoiseBPLibrary_eventsetNoiseSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics::SimplexNoiseBPLibrary_eventsetNoiseSeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execsetNoiseSeed)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_newSeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimplexNoiseBPLibrary::setNoiseSeed(Z_Param_Out_newSeed);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function setNoiseSeed

// Begin Class USimplexNoiseBPLibrary Function SimplexNoise1D
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics
{
	struct SimplexNoiseBPLibrary_eventSimplexNoise1D_Parms
	{
		float x;
		float inFactor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise1D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise1D_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise1D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "SimplexNoise1D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::SimplexNoiseBPLibrary_eventSimplexNoise1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::SimplexNoiseBPLibrary_eventSimplexNoise1D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execSimplexNoise1D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::SimplexNoise1D(Z_Param_x,Z_Param_inFactor);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function SimplexNoise1D

// Begin Class USimplexNoiseBPLibrary Function SimplexNoise2D
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics
{
	struct SimplexNoiseBPLibrary_eventSimplexNoise2D_Parms
	{
		float x;
		float y;
		float inFactor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise2D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise2D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise2D_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise2D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "SimplexNoise2D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::SimplexNoiseBPLibrary_eventSimplexNoise2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::SimplexNoiseBPLibrary_eventSimplexNoise2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execSimplexNoise2D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::SimplexNoise2D(Z_Param_x,Z_Param_y,Z_Param_inFactor);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function SimplexNoise2D

// Begin Class USimplexNoiseBPLibrary Function SimplexNoise3D
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics
{
	struct SimplexNoiseBPLibrary_eventSimplexNoise3D_Parms
	{
		float x;
		float y;
		float z;
		float inFactor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise3D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise3D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise3D_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise3D_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise3D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "SimplexNoise3D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::SimplexNoiseBPLibrary_eventSimplexNoise3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::SimplexNoiseBPLibrary_eventSimplexNoise3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execSimplexNoise3D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::SimplexNoise3D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_inFactor);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function SimplexNoise3D

// Begin Class USimplexNoiseBPLibrary Function SimplexNoise4D
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics
{
	struct SimplexNoiseBPLibrary_eventSimplexNoise4D_Parms
	{
		float x;
		float y;
		float z;
		float w;
		float inFactor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise4D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise4D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise4D_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise4D_Parms, w), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise4D_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoise4D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::NewProp_w,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "SimplexNoise4D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::SimplexNoiseBPLibrary_eventSimplexNoise4D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::SimplexNoiseBPLibrary_eventSimplexNoise4D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execSimplexNoise4D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_w);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::SimplexNoise4D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_inFactor);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function SimplexNoise4D

// Begin Class USimplexNoiseBPLibrary Function SimplexNoiseInRange1D
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics
{
	struct SimplexNoiseBPLibrary_eventSimplexNoiseInRange1D_Parms
	{
		float x;
		float rangeMin;
		float rangeMax;
		float inFactor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return value in Range between two float numbers\n// Return Value is scaled by difference between rangeMin & rangeMax value\n" },
#endif
		{ "CPP_Default_inFactor", "1.000000" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return value in Range between two float numbers\nReturn Value is scaled by difference between rangeMin & rangeMax value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange1D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::NewProp_rangeMin = { "rangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange1D_Parms, rangeMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::NewProp_rangeMax = { "rangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange1D_Parms, rangeMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange1D_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange1D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::NewProp_rangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::NewProp_rangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "SimplexNoiseInRange1D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseInRange1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseInRange1D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execSimplexNoiseInRange1D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::SimplexNoiseInRange1D(Z_Param_x,Z_Param_rangeMin,Z_Param_rangeMax,Z_Param_inFactor);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function SimplexNoiseInRange1D

// Begin Class USimplexNoiseBPLibrary Function SimplexNoiseInRange2D
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics
{
	struct SimplexNoiseBPLibrary_eventSimplexNoiseInRange2D_Parms
	{
		float x;
		float y;
		float rangeMin;
		float rangeMax;
		float inFactor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange2D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange2D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::NewProp_rangeMin = { "rangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange2D_Parms, rangeMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::NewProp_rangeMax = { "rangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange2D_Parms, rangeMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange2D_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange2D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::NewProp_rangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::NewProp_rangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "SimplexNoiseInRange2D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseInRange2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseInRange2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execSimplexNoiseInRange2D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::SimplexNoiseInRange2D(Z_Param_x,Z_Param_y,Z_Param_rangeMin,Z_Param_rangeMax,Z_Param_inFactor);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function SimplexNoiseInRange2D

// Begin Class USimplexNoiseBPLibrary Function SimplexNoiseInRange3D
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics
{
	struct SimplexNoiseBPLibrary_eventSimplexNoiseInRange3D_Parms
	{
		float x;
		float y;
		float z;
		float rangeMin;
		float rangeMax;
		float inFactor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange3D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange3D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange3D_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_rangeMin = { "rangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange3D_Parms, rangeMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_rangeMax = { "rangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange3D_Parms, rangeMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange3D_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange3D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_rangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_rangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "SimplexNoiseInRange3D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseInRange3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseInRange3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execSimplexNoiseInRange3D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::SimplexNoiseInRange3D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_rangeMin,Z_Param_rangeMax,Z_Param_inFactor);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function SimplexNoiseInRange3D

// Begin Class USimplexNoiseBPLibrary Function SimplexNoiseInRange4D
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics
{
	struct SimplexNoiseBPLibrary_eventSimplexNoiseInRange4D_Parms
	{
		float x;
		float y;
		float z;
		float w;
		float rangeMin;
		float rangeMax;
		float inFactor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange4D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange4D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange4D_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange4D_Parms, w), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_rangeMin = { "rangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange4D_Parms, rangeMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_rangeMax = { "rangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange4D_Parms, rangeMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange4D_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseInRange4D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_w,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_rangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_rangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "SimplexNoiseInRange4D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseInRange4D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseInRange4D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execSimplexNoiseInRange4D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_w);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::SimplexNoiseInRange4D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_rangeMin,Z_Param_rangeMax,Z_Param_inFactor);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function SimplexNoiseInRange4D

// Begin Class USimplexNoiseBPLibrary Function SimplexNoiseScaled1D
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics
{
	struct SimplexNoiseBPLibrary_eventSimplexNoiseScaled1D_Parms
	{
		float x;
		float scaleOut;
		float inFactor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scaled by float value\n" },
#endif
		{ "CPP_Default_inFactor", "1.000000" },
		{ "CPP_Default_scaleOut", "1.000000" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scaled by float value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scaleOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled1D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::NewProp_scaleOut = { "scaleOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled1D_Parms, scaleOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled1D_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled1D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::NewProp_scaleOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "SimplexNoiseScaled1D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseScaled1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseScaled1D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execSimplexNoiseScaled1D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scaleOut);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::SimplexNoiseScaled1D(Z_Param_x,Z_Param_scaleOut,Z_Param_inFactor);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function SimplexNoiseScaled1D

// Begin Class USimplexNoiseBPLibrary Function SimplexNoiseScaled2D
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics
{
	struct SimplexNoiseBPLibrary_eventSimplexNoiseScaled2D_Parms
	{
		float x;
		float y;
		float scaleOut;
		float inFactor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "CPP_Default_scaleOut", "1.000000" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scaleOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled2D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled2D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::NewProp_scaleOut = { "scaleOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled2D_Parms, scaleOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled2D_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled2D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::NewProp_scaleOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "SimplexNoiseScaled2D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseScaled2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseScaled2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execSimplexNoiseScaled2D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scaleOut);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::SimplexNoiseScaled2D(Z_Param_x,Z_Param_y,Z_Param_scaleOut,Z_Param_inFactor);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function SimplexNoiseScaled2D

// Begin Class USimplexNoiseBPLibrary Function SimplexNoiseScaled3D
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics
{
	struct SimplexNoiseBPLibrary_eventSimplexNoiseScaled3D_Parms
	{
		float x;
		float y;
		float z;
		float scaleOut;
		float inFactor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "CPP_Default_scaleOut", "1.000000" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scaleOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled3D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled3D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled3D_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::NewProp_scaleOut = { "scaleOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled3D_Parms, scaleOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled3D_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled3D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::NewProp_scaleOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "SimplexNoiseScaled3D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseScaled3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseScaled3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execSimplexNoiseScaled3D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scaleOut);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::SimplexNoiseScaled3D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_scaleOut,Z_Param_inFactor);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function SimplexNoiseScaled3D

// Begin Class USimplexNoiseBPLibrary Function SimplexNoiseScaled4D
struct Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics
{
	struct SimplexNoiseBPLibrary_eventSimplexNoiseScaled4D_Parms
	{
		float x;
		float y;
		float z;
		float w;
		float scaleOut;
		float inFactor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "CPP_Default_inFactor", "1.000000" },
		{ "CPP_Default_scaleOut", "1.000000" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scaleOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled4D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled4D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled4D_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled4D_Parms, w), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_scaleOut = { "scaleOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled4D_Parms, scaleOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_inFactor = { "inFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled4D_Parms, inFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseBPLibrary_eventSimplexNoiseScaled4D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_w,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_scaleOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_inFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseBPLibrary, nullptr, "SimplexNoiseScaled4D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseScaled4D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::SimplexNoiseBPLibrary_eventSimplexNoiseScaled4D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseBPLibrary::execSimplexNoiseScaled4D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_w);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scaleOut);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseBPLibrary::SimplexNoiseScaled4D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_scaleOut,Z_Param_inFactor);
	P_NATIVE_END;
}
// End Class USimplexNoiseBPLibrary Function SimplexNoiseScaled4D

// Begin Class USimplexNoiseBPLibrary
void USimplexNoiseBPLibrary::StaticRegisterNativesUSimplexNoiseBPLibrary()
{
	UClass* Class = USimplexNoiseBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSimplexNoise1D_EX", &USimplexNoiseBPLibrary::execGetSimplexNoise1D_EX },
		{ "GetSimplexNoise2D_EX", &USimplexNoiseBPLibrary::execGetSimplexNoise2D_EX },
		{ "GetSimplexNoise3D_EX", &USimplexNoiseBPLibrary::execGetSimplexNoise3D_EX },
		{ "GetSimplexNoise4D_EX", &USimplexNoiseBPLibrary::execGetSimplexNoise4D_EX },
		{ "setNoiseFromStream", &USimplexNoiseBPLibrary::execsetNoiseFromStream },
		{ "setNoiseSeed", &USimplexNoiseBPLibrary::execsetNoiseSeed },
		{ "SimplexNoise1D", &USimplexNoiseBPLibrary::execSimplexNoise1D },
		{ "SimplexNoise2D", &USimplexNoiseBPLibrary::execSimplexNoise2D },
		{ "SimplexNoise3D", &USimplexNoiseBPLibrary::execSimplexNoise3D },
		{ "SimplexNoise4D", &USimplexNoiseBPLibrary::execSimplexNoise4D },
		{ "SimplexNoiseInRange1D", &USimplexNoiseBPLibrary::execSimplexNoiseInRange1D },
		{ "SimplexNoiseInRange2D", &USimplexNoiseBPLibrary::execSimplexNoiseInRange2D },
		{ "SimplexNoiseInRange3D", &USimplexNoiseBPLibrary::execSimplexNoiseInRange3D },
		{ "SimplexNoiseInRange4D", &USimplexNoiseBPLibrary::execSimplexNoiseInRange4D },
		{ "SimplexNoiseScaled1D", &USimplexNoiseBPLibrary::execSimplexNoiseScaled1D },
		{ "SimplexNoiseScaled2D", &USimplexNoiseBPLibrary::execSimplexNoiseScaled2D },
		{ "SimplexNoiseScaled3D", &USimplexNoiseBPLibrary::execSimplexNoiseScaled3D },
		{ "SimplexNoiseScaled4D", &USimplexNoiseBPLibrary::execSimplexNoiseScaled4D },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimplexNoiseBPLibrary);
UClass* Z_Construct_UClass_USimplexNoiseBPLibrary_NoRegister()
{
	return USimplexNoiseBPLibrary::StaticClass();
}
struct Z_Construct_UClass_USimplexNoiseBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SimplexNoiseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimplexNoiseBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise1D_EX, "GetSimplexNoise1D_EX" }, // 1349404460
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise2D_EX, "GetSimplexNoise2D_EX" }, // 4144986871
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise3D_EX, "GetSimplexNoise3D_EX" }, // 601476568
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_GetSimplexNoise4D_EX, "GetSimplexNoise4D_EX" }, // 3292429965
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseFromStream, "setNoiseFromStream" }, // 2446663054
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_setNoiseSeed, "setNoiseSeed" }, // 1124182494
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise1D, "SimplexNoise1D" }, // 2037089407
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise2D, "SimplexNoise2D" }, // 2262787125
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise3D, "SimplexNoise3D" }, // 3754492955
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoise4D, "SimplexNoise4D" }, // 3526532115
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange1D, "SimplexNoiseInRange1D" }, // 2958386637
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange2D, "SimplexNoiseInRange2D" }, // 674031011
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange3D, "SimplexNoiseInRange3D" }, // 1928505885
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseInRange4D, "SimplexNoiseInRange4D" }, // 1812966142
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled1D, "SimplexNoiseScaled1D" }, // 1184346621
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled2D, "SimplexNoiseScaled2D" }, // 2600807895
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled3D, "SimplexNoiseScaled3D" }, // 3612287380
		{ &Z_Construct_UFunction_USimplexNoiseBPLibrary_SimplexNoiseScaled4D, "SimplexNoiseScaled4D" }, // 676821875
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplexNoiseBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimplexNoiseBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SimplexNoise,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimplexNoiseBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimplexNoiseBPLibrary_Statics::ClassParams = {
	&USimplexNoiseBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimplexNoiseBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimplexNoiseBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimplexNoiseBPLibrary()
{
	if (!Z_Registration_Info_UClass_USimplexNoiseBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimplexNoiseBPLibrary.OuterSingleton, Z_Construct_UClass_USimplexNoiseBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimplexNoiseBPLibrary.OuterSingleton;
}
template<> SIMPLEXNOISE_API UClass* StaticClass<USimplexNoiseBPLibrary>()
{
	return USimplexNoiseBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimplexNoiseBPLibrary);
USimplexNoiseBPLibrary::~USimplexNoiseBPLibrary() {}
// End Class USimplexNoiseBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projekte_LoH_TheTavern_Plugins_GIT_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPoint::StaticStruct, Z_Construct_UScriptStruct_FPoint_Statics::NewStructOps, TEXT("Point"), &Z_Registration_Info_UScriptStruct_Point, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoint), 3141991188U) },
		{ FTriangle::StaticStruct, Z_Construct_UScriptStruct_FTriangle_Statics::NewStructOps, TEXT("Triangle"), &Z_Registration_Info_UScriptStruct_Triangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTriangle), 2949605605U) },
		{ FNoiseCell::StaticStruct, Z_Construct_UScriptStruct_FNoiseCell_Statics::NewStructOps, TEXT("NoiseCell"), &Z_Registration_Info_UScriptStruct_NoiseCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNoiseCell), 3396796907U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimplexNoiseBPLibrary, USimplexNoiseBPLibrary::StaticClass, TEXT("USimplexNoiseBPLibrary"), &Z_Registration_Info_UClass_USimplexNoiseBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimplexNoiseBPLibrary), 1522589126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projekte_LoH_TheTavern_Plugins_GIT_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_3403238642(TEXT("/Script/SimplexNoise"),
	Z_CompiledInDeferFile_FID_UE_Projekte_LoH_TheTavern_Plugins_GIT_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projekte_LoH_TheTavern_Plugins_GIT_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Projekte_LoH_TheTavern_Plugins_GIT_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projekte_LoH_TheTavern_Plugins_GIT_SimplexNoise_Source_SimplexNoise_Public_SimplexNoiseBPLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
