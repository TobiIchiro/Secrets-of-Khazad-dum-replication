#pragma once
#include "CoreMinimal.h"
#include "FGKMontageState.h"
#include "FGKSlidingState_Exit.generated.h"

class UAnimMontage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKSlidingState_Exit : public UFGKMontageState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SlideMontage;
    
public:
    UFGKSlidingState_Exit();

};

