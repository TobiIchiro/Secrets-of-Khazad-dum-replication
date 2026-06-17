#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MorSimpleVolume.h"
#include "MorCatalogedContextMarker.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorCatalogedContextMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ContextType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSimpleVolume LocalVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShallowWater;
    
    FMorCatalogedContextMarker();
};

