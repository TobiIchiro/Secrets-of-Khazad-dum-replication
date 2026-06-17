#pragma once
#include "CoreMinimal.h"
#include "FGKMontageState.h"
#include "MorMontageState_ClimbingRope.generated.h"

class ARopeInteractable;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMontageState_ClimbingRope : public UFGKMontageState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARopeInteractable* Rope;
    
public:
    UMorMontageState_ClimbingRope();

};

