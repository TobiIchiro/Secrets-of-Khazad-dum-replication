#pragma once
#include "CoreMinimal.h"
#include "FGKAISquadState.h"
#include "MorAISquadState_FindAndAssignBehaviorPoint.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAISquadState_FindAndAssignBehaviorPoint : public UFGKAISquadState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyToAssign;
    
public:
    UMorAISquadState_FindAndAssignBehaviorPoint();

};

