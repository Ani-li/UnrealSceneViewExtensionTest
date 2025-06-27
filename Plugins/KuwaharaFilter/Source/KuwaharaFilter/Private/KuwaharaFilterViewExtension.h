#pragma once

#include "CoreMinimal.h"
#include "ScreenPass.h"
#include "SceneViewExtension.h"
#include "Runtime/Renderer/Private/SceneRendering.h"
#include "PixelShaderUtils.h"
#include "PostProcess/PostProcessMaterialInputs.h"
#include "KuwaharaFilterMaterial.h"

class FKuwaharaFilterViewExtension : public FSceneViewExtensionBase
{
public:
	FKuwaharaFilterViewExtension(const FAutoRegister& AutoRegister): FSceneViewExtensionBase(AutoRegister){}
	
	virtual void SetupViewFamily(FSceneViewFamily& InViewFamily) override {};
	virtual void SetupView(FSceneViewFamily& InViewFamily, FSceneView& InView) override {};
	virtual void BeginRenderViewFamily(FSceneViewFamily& InViewFamily) override {};
	
	virtual void SubscribeToPostProcessingPass(EPostProcessingPass Pass, const FSceneView& InView, FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled) override;
	FScreenPassTexture SubscribeToPostProcessingPass_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessMaterialInputs& InOutInputs);
};
