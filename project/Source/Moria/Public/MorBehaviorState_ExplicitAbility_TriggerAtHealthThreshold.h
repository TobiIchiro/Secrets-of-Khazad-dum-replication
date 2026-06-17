#pragma once
#include "CoreMinimal.h"
#include "MorBehaviorState_ExplicitAbility.h"
#include "MorBehaviorState_ExplicitAbility_TriggerAtHealthThreshold.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_ExplicitAbility_TriggerAtHealthThreshold : public UMorBehaviorState_ExplicitAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TriggerHealthPercentageThresholds;
    
public:
    UMorBehaviorState_ExplicitAbility_TriggerAtHealthThreshold();

};

