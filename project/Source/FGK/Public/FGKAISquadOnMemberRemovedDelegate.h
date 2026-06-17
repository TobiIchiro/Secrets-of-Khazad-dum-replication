#pragma once
#include "CoreMinimal.h"
#include "FGKAISquadOnMemberRemovedDelegate.generated.h"

class AFGKAIController;
class AFGKAISquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFGKAISquadOnMemberRemoved, AFGKAISquad*, Squad, AFGKAIController*, RemovedMember);

