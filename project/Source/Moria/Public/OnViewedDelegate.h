#pragma once
#include "CoreMinimal.h"
#include "OnViewedDelegate.generated.h"

class AMorCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnViewed, AMorCharacter*, Character);

