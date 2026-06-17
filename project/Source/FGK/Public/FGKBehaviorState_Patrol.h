#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "FGKBehaviorState_Patrol.generated.h"

class UFGKAIPatrolComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_Patrol : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEndWhenReachPatrolPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEndWhenReachOccupiablePatrolPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGoToNextIfAlreadyAtPatrolPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKAIPatrolComponent* PatrolComponent;
    
public:
    UFGKBehaviorState_Patrol();

};

