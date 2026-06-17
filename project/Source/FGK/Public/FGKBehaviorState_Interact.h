#pragma once
#include "CoreMinimal.h"
#include "EFGKGait.h"
#include "FGKBehaviorState.h"
#include "FGKBehaviorState_Interact.generated.h"

class UFGKAIBehaviorPointComponent;
class UFGKBehaviorState_MoveTo;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_Interact : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldMoveToPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFollowMovingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlignmentAcceptanceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPartialPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldOverrideGait: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKGait OverrideGait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKAIBehaviorPointComponent* BehaviorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKBehaviorState_MoveTo* MoveToInteractState;
    
public:
    UFGKBehaviorState_Interact();

};

