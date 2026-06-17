#pragma once
#include "CoreMinimal.h"
#include "FGKLocomotionState.h"
#include "FGKStandingState.generated.h"

class UCharacterMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKStandingState : public UFGKLocomotionState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* MovementComp;
    
public:
    UFGKStandingState();

};

