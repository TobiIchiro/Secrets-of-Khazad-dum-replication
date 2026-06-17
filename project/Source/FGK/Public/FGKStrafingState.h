#pragma once
#include "CoreMinimal.h"
#include "FGKLocomotionState.h"
#include "FGKStrafingState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFGKStrafingState : public UFGKLocomotionState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFaceTargetIfExists;
    
public:
    UFGKStrafingState();

};

