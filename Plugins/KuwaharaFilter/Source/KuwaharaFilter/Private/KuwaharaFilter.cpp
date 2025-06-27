// Copyright Epic Games, Inc. All Rights Reserved.

#include "KuwaharaFilter.h"

#define LOCTEXT_NAMESPACE "FKuwaharaFilterModule"

void FKuwaharaFilterModule::StartupModule()
{
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("KuwaharaFilter"))->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/Plugins/KuwaharaFilter/Shaders"), PluginShaderDir);
}

void FKuwaharaFilterModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FKuwaharaFilterModule, KuwaharaFilter)