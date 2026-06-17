#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMorDifficultyCombatGridProperty.h"
#include "EMorDifficultyCombatGridType.h"
#include "EMorDifficultySettingType.h"
#include "MorDifficultySettingModificationInstructions.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDifficultySettingModificationInstructions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorDifficultySettingType SettingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttributeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorDifficultyCombatGridType CombatGridToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorDifficultyCombatGridProperty CombatGridPropertyToOveride;
    
    FMorDifficultySettingModificationInstructions();
};

