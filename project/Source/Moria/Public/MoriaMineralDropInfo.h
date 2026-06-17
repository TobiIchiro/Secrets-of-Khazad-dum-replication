#pragma once
#include "CoreMinimal.h"
#include "MorDifficultySettingRowHandle.h"
#include "MorOreRowHandle.h"
#include "MoriaMineralDropInfo.generated.h"

USTRUCT(BlueprintType)
struct FMoriaMineralDropInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOreRowHandle DropType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDifficultySettingRowHandle ModifyingDifficultySetting;
    
    MORIA_API FMoriaMineralDropInfo();
};

