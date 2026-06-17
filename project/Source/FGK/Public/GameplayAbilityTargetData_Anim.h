#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "GameplayAbilityTargetData_Anim.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FGK_API FGameplayAbilityTargetData_Anim : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimationAsset> Anim;
    
    FGameplayAbilityTargetData_Anim();
};

