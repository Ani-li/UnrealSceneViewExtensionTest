#pragma once
#include "GlobalShader.h"
#include "ShaderParameterStruct.h"

BEGIN_SHADER_PARAMETER_STRUCT(FKuwaharaFilterPSParameters,)
	SHADER_PARAMETER_RDG_TEXTURE(Texture2D, InputTexture)
	SHADER_PARAMETER_SAMPLER(SamplerState, InputSampler)
	SHADER_PARAMETER(FVector2f, InputTextureSize)
	SHADER_PARAMETER(float, KuwaharaRadius)
	RENDER_TARGET_BINDING_SLOTS()
END_SHADER_PARAMETER_STRUCT()
class FKuwaharaFilterMaterialPS : public FGlobalShader
{
public:
	DECLARE_GLOBAL_SHADER(FKuwaharaFilterMaterialPS)
	using FParameters = FKuwaharaFilterPSParameters;
	SHADER_USE_PARAMETER_STRUCT(FKuwaharaFilterMaterialPS, FGlobalShader)

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return true;
	}
};
