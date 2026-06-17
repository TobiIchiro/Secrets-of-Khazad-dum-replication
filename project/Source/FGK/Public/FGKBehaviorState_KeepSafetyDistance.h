#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "EFGKRotationMode.h"
#include "FGKBehaviorState.h"
#include "FGKBehaviorState_KeepSafetyDistance.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_KeepSafetyDistance : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> TeamAttitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFGKRotationMode DefaultRotationMode;
    
public:
    UFGKBehaviorState_KeepSafetyDistance();

};

