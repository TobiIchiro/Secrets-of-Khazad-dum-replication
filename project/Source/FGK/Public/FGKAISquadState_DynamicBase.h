#pragma once
#include "CoreMinimal.h"
#include "FGKAISquadState.h"
#include "FGKAISquadState_DynamicBase.generated.h"

class UFGKState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKAISquadState_DynamicBase : public UFGKAISquadState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKState* InsertedState;
    
public:
    UFGKAISquadState_DynamicBase();

};

