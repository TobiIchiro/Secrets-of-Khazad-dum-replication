#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FGKBehaviorState_DynamicBase.h"
#include "Templates/SubclassOf.h"
#include "FGKBehaviorState_DynamicBehavior.generated.h"

class UFGKBehaviorState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_DynamicBehavior : public UFGKBehaviorState_DynamicBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BehaviorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKBehaviorState> DefaultBehavior;
    
public:
    UFGKBehaviorState_DynamicBehavior();

};

