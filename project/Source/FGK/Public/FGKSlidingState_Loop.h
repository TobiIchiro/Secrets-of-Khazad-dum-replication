#pragma once
#include "CoreMinimal.h"
#include "FGKMontageState.h"
#include "FGKSlidingState_Loop.generated.h"

class UAnimMontage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKSlidingState_Loop : public UFGKMontageState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SlideMontage;
    
public:
    UFGKSlidingState_Loop();

};

