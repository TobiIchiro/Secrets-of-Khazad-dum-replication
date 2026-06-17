#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "MorScalableLight.h"
#include "TODFillLight.generated.h"

class AMorLocalLightingInfo;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UTODFillLight : public UPointLightComponent, public IMorScalableLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorLocalLightingInfo* OwningLightingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightScalabilityLevel;
    
    UTODFillLight(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

