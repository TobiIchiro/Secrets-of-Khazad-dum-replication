#pragma once
#include "CoreMinimal.h"
#include "EFGKGait.h"
#include "EFGKRotationMode.h"
#include "FGKBehaviorState_MoveTo.h"
#include "FGKBehaviorState_MoveToRandomPointInRadius.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_MoveToRandomPointInRadius : public UFGKBehaviorState_MoveTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKRotationMode RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKGait Gait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFGKGait PreviousGait;
    
public:
    UFGKBehaviorState_MoveToRandomPointInRadius();

};

