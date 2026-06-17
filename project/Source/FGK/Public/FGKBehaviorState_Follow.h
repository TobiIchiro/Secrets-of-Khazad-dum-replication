#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "GenericTeamAgentInterface.h"
#include "FGKBehaviorState.h"
#include "FGKBehaviorState_Follow.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_Follow : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> TeamAttitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIMoveRequest MoveRequest;
    
public:
    UFGKBehaviorState_Follow();

};

