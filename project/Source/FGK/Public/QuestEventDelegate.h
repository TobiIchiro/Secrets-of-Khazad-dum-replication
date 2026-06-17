#pragma once
#include "CoreMinimal.h"
#include "QuestEventDelegate.generated.h"

class UFGKQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestEvent, const UFGKQuest*, Quest);

