#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "GameplayAbilityTargetData_RootMotionScale.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FGameplayAbilityTargetData_RootMotionScale : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    FGameplayAbilityTargetData_RootMotionScale();
};

