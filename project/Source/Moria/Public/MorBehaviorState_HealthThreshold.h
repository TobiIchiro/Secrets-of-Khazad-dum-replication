#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "MorBehaviorState_HealthThreshold.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_HealthThreshold : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TriggerHealthPercentageThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
public:
    UMorBehaviorState_HealthThreshold();

};

