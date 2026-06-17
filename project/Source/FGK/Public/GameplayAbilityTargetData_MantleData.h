#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "FGKMantleData.h"
#include "GameplayAbilityTargetData_MantleData.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FGameplayAbilityTargetData_MantleData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKMantleData MantleData;
    
    FGameplayAbilityTargetData_MantleData();
};

