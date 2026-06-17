#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "GameplayAbilityTargetData_Number.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FGameplayAbilityTargetData_Number : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Number;
    
    FGameplayAbilityTargetData_Number();
};

