#pragma once
#include "CoreMinimal.h"
#include "SceneViewExtension.h"
#include "KuwaharaFilterViewExtension.h"
#include "Subsystems/EngineSubsystem.h"
#include "KuwaharaFilterSubsystem.generated.h"

UCLASS()
class UKuwaharaFilterSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()
public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;
private:
	TSharedPtr<class FKuwaharaFilterViewExtension, ESPMode::ThreadSafe> KuwaharaFilterViewExtension;
};
