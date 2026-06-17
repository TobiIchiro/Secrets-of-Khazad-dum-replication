#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "GameplayAbilityTargetData_Uint32.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FGameplayAbilityTargetData_Uint32 : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Number;
    
    FGameplayAbilityTargetData_Uint32();
};

