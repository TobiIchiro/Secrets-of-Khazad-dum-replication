#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKJumpFlyState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKJumpFlyState : public UFGKCharacterState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpSpeed;
    
    UFGKJumpFlyState();

protected:
    UFUNCTION(BlueprintCallable)
    void OnReachedJumpApex();
    
};

