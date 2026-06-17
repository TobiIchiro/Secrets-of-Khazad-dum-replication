#pragma once
#include "CoreMinimal.h"
#include "MorBubbleSplitData.generated.h"

class UMorBubbleDefinition;

USTRUCT(BlueprintType)
struct MORIA_API FMorBubbleSplitData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBubbleDefinition* Tops[4];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBubbleDefinition* Bottoms[4];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBubbleDefinition* Combines[4];
    
    FMorBubbleSplitData();
};

