#include "TODFillLight.h"

UTODFillLight::UTODFillLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CastShadows = false;
    this->bUseInverseSquaredFalloff = false;
    this->OwningLightingInfo = NULL;
    this->LightScalabilityLevel = 1;
}


