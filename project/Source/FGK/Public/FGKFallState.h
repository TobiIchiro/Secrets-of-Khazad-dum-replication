#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKFallState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKFallState : public UFGKCharacterState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpSpeed;
    
    UFGKFallState();

};

