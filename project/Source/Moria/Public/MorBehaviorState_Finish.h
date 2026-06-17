#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "MorBehaviorState_Finish.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Finish : public UFGKBehaviorState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbort;
    
public:
    UMorBehaviorState_Finish();

};

