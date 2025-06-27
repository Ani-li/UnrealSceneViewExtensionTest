#include "KuwaharaFilterMaterial.h"

IMPLEMENT_SHADER_TYPE(, FKuwaharaFilterMaterialPS, TEXT("/Plugins/KuwaharaFilter/Shaders/KuwaharaFilterShader.usf"), TEXT("MainPS"), SF_Pixel)