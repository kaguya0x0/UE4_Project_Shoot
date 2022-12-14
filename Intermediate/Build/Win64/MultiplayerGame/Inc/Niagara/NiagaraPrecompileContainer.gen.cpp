// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/NiagaraPrecompileContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraPrecompileContainer() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPrecompileContainer_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPrecompileContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	void UNiagaraPrecompileContainer::StaticRegisterNativesUNiagaraPrecompileContainer()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraPrecompileContainer_NoRegister()
	{
		return UNiagaraPrecompileContainer::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraPrecompileContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scripts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scripts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_System;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraPrecompileContainer.h" },
		{ "ModuleRelativePath", "Private/NiagaraPrecompileContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts_Inner = { "Scripts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraPrecompileContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts = { "Scripts", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPrecompileContainer, Scripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_System_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraPrecompileContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraPrecompileContainer, System), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_System_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_System_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_System,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPrecompileContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::ClassParams = {
		&UNiagaraPrecompileContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraPrecompileContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraPrecompileContainer, 1611350116);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraPrecompileContainer>()
	{
		return UNiagaraPrecompileContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraPrecompileContainer(Z_Construct_UClass_UNiagaraPrecompileContainer, &UNiagaraPrecompileContainer::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraPrecompileContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPrecompileContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
