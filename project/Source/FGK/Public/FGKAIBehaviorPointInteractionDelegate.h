#pragma once
#include "CoreMinimal.h"
#include "FGKAIBehaviorPointInteractionDelegate.generated.h"

class AFGKAIController;
class UFGKAIBehaviorPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFGKAIBehaviorPointInteraction, AFGKAIController*, AIController, UFGKAIBehaviorPointComponent*, BehaviorPoint);

