#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKJumpLaunchState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKJumpLaunchState : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanJumpFromAnywhere: 1;
    
public:
    UFGKJumpLaunchState();

};

