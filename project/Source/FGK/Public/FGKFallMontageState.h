#pragma once
#include "CoreMinimal.h"
#include "FGKMontageState.h"
#include "FGKFallMontageState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKFallMontageState : public UFGKMontageState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpSpeed;
    
    UFGKFallMontageState();

};

