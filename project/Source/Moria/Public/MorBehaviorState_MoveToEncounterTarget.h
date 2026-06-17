#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState_MoveTo.h"
#include "MorBehaviorState_MoveToEncounterTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_MoveToEncounterTarget : public UFGKBehaviorState_MoveTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxProjectAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScalePerProjectAttempt;
    
public:
    UMorBehaviorState_MoveToEncounterTarget();

};

