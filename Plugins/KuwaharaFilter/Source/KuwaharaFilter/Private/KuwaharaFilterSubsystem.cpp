#include "KuwaharaFilterSubsystem.h"

void UKuwaharaFilterSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	KuwaharaFilterViewExtension = FSceneViewExtensions::NewExtension<FKuwaharaFilterViewExtension>();
	UE_LOG(LogTemp, Log, TEXT("KuwaharaFilterExtension Created."));
}

void UKuwaharaFilterSubsystem::Deinitialize()
{
	{
		KuwaharaFilterViewExtension->IsActiveThisFrameFunctions.Empty();
		FSceneViewExtensionIsActiveFunctor IsActiveFunctor;
		IsActiveFunctor.IsActiveFunction = [](const ISceneViewExtension* SceneViewExtension, const FSceneViewExtensionContext Context)
		{
			return TOptional<bool>(false);
		};
		KuwaharaFilterViewExtension->IsActiveThisFrameFunctions.Add(IsActiveFunctor);
	}
	KuwaharaFilterViewExtension.Reset();
	KuwaharaFilterViewExtension = nullptr;
}