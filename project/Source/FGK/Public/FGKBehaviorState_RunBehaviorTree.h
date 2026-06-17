#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "FGKBehaviorState_RunBehaviorTree.generated.h"

class UBehaviorTree;
class UBehaviorTreeComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_RunBehaviorTree : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviorTreeComponent;
    
public:
    UFGKBehaviorState_RunBehaviorTree();

};

