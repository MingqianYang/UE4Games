// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstCPPGameLesson/FirstCPPGameLessonGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstCPPGameLessonGameModeBase() {}
// Cross Module References
	FIRSTCPPGAMELESSON_API UClass* Z_Construct_UClass_AFirstCPPGameLessonGameModeBase_NoRegister();
	FIRSTCPPGAMELESSON_API UClass* Z_Construct_UClass_AFirstCPPGameLessonGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstCPPGameLesson();
// End Cross Module References
	void AFirstCPPGameLessonGameModeBase::StaticRegisterNativesAFirstCPPGameLessonGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFirstCPPGameLessonGameModeBase_NoRegister()
	{
		return AFirstCPPGameLessonGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFirstCPPGameLessonGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstCPPGameLessonGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstCPPGameLesson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCPPGameLessonGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstCPPGameLessonGameModeBase.h" },
		{ "ModuleRelativePath", "FirstCPPGameLessonGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstCPPGameLessonGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstCPPGameLessonGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstCPPGameLessonGameModeBase_Statics::ClassParams = {
		&AFirstCPPGameLessonGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstCPPGameLessonGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCPPGameLessonGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstCPPGameLessonGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstCPPGameLessonGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstCPPGameLessonGameModeBase, 2536714840);
	template<> FIRSTCPPGAMELESSON_API UClass* StaticClass<AFirstCPPGameLessonGameModeBase>()
	{
		return AFirstCPPGameLessonGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstCPPGameLessonGameModeBase(Z_Construct_UClass_AFirstCPPGameLessonGameModeBase, &AFirstCPPGameLessonGameModeBase::StaticClass, TEXT("/Script/FirstCPPGameLesson"), TEXT("AFirstCPPGameLessonGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstCPPGameLessonGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
