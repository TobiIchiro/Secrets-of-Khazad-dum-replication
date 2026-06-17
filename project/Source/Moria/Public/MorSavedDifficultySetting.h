#pragma once
#include "CoreMinimal.h"
#include "MorDifficultySettingRowHandle.h"
#include "MorSavedDifficultySetting.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSavedDifficultySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorDifficultySettingRowHandle DifficultySettingRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float CurrentModifierValue;
    
    FMorSavedDifficultySetting();
};

