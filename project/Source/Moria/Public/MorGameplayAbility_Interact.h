#pragma once
#include "CoreMinimal.h"
#include "MontageGameplayAbility.h"
#include "MorGameplayAbility_Interact.generated.h"

class AActor;
class UAbilityTask_Rotate;

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_Interact : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_Rotate* AlignmentTask;
    
public:
    UMorGameplayAbility_Interact();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartHitReact(AActor* Reactor);
    
};

