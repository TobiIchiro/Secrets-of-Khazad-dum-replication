#pragma once
#include "CoreMinimal.h"
#include "OnClaimedDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClaimed, ACharacter*, NPC);

