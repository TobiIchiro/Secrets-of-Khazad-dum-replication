#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorDifficultySettingModificationInstructions.h"
#include "MorDifficultySliderRowHandle.h"
#include "MorDifficultySettingDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDifficultySettingDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDifficultySliderRowHandle SliderHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDifficultySettingModificationInstructions ModificationInstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SettingOptions;
    
    FMorDifficultySettingDefinition();
};

