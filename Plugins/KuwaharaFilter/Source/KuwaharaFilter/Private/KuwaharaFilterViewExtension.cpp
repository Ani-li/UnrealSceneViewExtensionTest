#include "KuwaharaFilterViewExtension.h"

void FKuwaharaFilterViewExtension::SubscribeToPostProcessingPass(EPostProcessingPass Pass, const FSceneView& InView, FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled)
{
	if(Pass == EPostProcessingPass::Tonemap)
	{
		InOutPassCallbacks.Add(FAfterPassCallbackDelegate::CreateRaw(this, &FKuwaharaFilterViewExtension::SubscribeToPostProcessingPass_RenderThread));
	}
}

FScreenPassTexture FKuwaharaFilterViewExtension::SubscribeToPostProcessingPass_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessMaterialInputs& InOutInputs)
{
	FScreenPassTexture SceneColor(InOutInputs.GetInput(EPostProcessMaterialInput::SceneColor));

	const FIntRect ViewInfo = static_cast<const FViewInfo&>(View).ViewRect;
	const FGlobalShaderMap* ViewShaderMap = static_cast<const FViewInfo&>(View).ShaderMap;

	FKuwaharaFilterPSParameters* PassParameters = GraphBuilder.AllocParameters<FKuwaharaFilterPSParameters>();
	PassParameters->InputTexture = SceneColor.Texture;
	PassParameters->InputSampler = TStaticSamplerState<SF_Bilinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
	FIntPoint TextureExtent = SceneColor.Texture->Desc.Extent;
	PassParameters->InputTextureSize = FVector2f(TextureExtent.X, TextureExtent.Y);
	PassParameters->KuwaharaRadius = 5;
	PassParameters->RenderTargets[0] = FRenderTargetBinding(SceneColor.Texture, ERenderTargetLoadAction::ENoAction);
	TShaderMapRef<FKuwaharaFilterMaterialPS> PixelShader(ViewShaderMap);
	FPixelShaderUtils::AddFullscreenPass(
		GraphBuilder,
		ViewShaderMap,
		RDG_EVENT_NAME("Kuwahara Filter Pass"),
		PixelShader,
		PassParameters,
		ViewInfo
	);
	
	return SceneColor;
}
