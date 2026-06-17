#pragma once
#include "CoreMinimal.h"
#include "MorBuilderSlot.h"
#include "MorBuilderStageSlots.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBuilderStageSlots {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorBuilderSlot> StageSlots;
    
    FMorBuilderStageSlots();
};

