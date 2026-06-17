#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "MorBlockedMoveDetectedDelegateDelegate.h"
#include "MorAbilityTask_DetectBlockedMove.generated.h"

class UAnimInstance;
class UAnimMontage;
class UGameplayAbility;
class UMorAbilityTask_DetectBlockedMove;

UCLASS(Blueprintable)
class MORIA_API UMorAbilityTask_DetectBlockedMove : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorBlockedMoveDetectedDelegate OnMovementBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* CachedAnimInstance;
    
    UMorAbilityTask_DetectBlockedMove();

    UFUNCTION(BlueprintCallable)
    static UMorAbilityTask_DetectBlockedMove* CreateDetectBlockedMove(UGameplayAbility* OwningAbility, UAnimMontage* RootMotionMontage);
    
};

