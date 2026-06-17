#pragma once
#include "CoreMinimal.h"
#include "FGKAISquadOnMemberAddedDelegate.generated.h"

class AFGKAIController;
class AFGKAISquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFGKAISquadOnMemberAdded, AFGKAISquad*, Squad, AFGKAIController*, AddedMember);

