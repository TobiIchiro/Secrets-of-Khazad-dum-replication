#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "MorHazardVolumeCharInside.generated.h"

class UShapeComponent;

USTRUCT(BlueprintType)
struct FMorHazardVolumeCharInside {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UShapeComponent*> InVolumes;
    
    MORIA_API FMorHazardVolumeCharInside();
};

