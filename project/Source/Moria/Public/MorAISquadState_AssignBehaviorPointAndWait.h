#pragma once
#include "CoreMinimal.h"
#include "FGKAISquadState.h"
#include "MorAISquadState_AssignBehaviorPointAndWait.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAISquadState_AssignBehaviorPointAndWait : public UFGKAISquadState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SquadBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MemberBlackboardKeyName;
    
public:
    UMorAISquadState_AssignBehaviorPointAndWait();

};

