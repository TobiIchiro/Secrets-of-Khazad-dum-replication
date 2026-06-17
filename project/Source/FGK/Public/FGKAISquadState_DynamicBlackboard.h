#pragma once
#include "CoreMinimal.h"
#include "FGKAISquadState_DynamicBase.h"
#include "FGKAISquadState_DynamicBlackboard.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAISquadState_DynamicBlackboard : public UFGKAISquadState_DynamicBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BehaviorKeyName;
    
public:
    UFGKAISquadState_DynamicBlackboard();

};

