#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "GameplayAbilityTargetData_Charge.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FGameplayAbilityTargetData_Charge : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeAmount;
    
    FGameplayAbilityTargetData_Charge();
};

