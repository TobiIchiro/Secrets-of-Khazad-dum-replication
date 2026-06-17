#pragma once
#include "CoreMinimal.h"
#include "FGKEffectState.h"
#include "FGKBehaviorState.generated.h"

class AFGKAIController;
class AFGKBaseCharacter;
class UFGKAISenseConfigsOverride;
class UFGKAITargetingComponent;
class UFGKCharacterMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState : public UFGKEffectState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKAIController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKCharacterMovementComponent* MoveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKAITargetingComponent* AITargetingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKAISenseConfigsOverride* SenseConfigsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookAtTarget;
    
public:
    UFGKBehaviorState();

protected:
    UFUNCTION(BlueprintCallable)
    void RefreshPawn();
    
};

