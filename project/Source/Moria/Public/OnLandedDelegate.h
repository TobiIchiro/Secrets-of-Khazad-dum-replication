#pragma once
#include "CoreMinimal.h"
#include "MorCharacterFallStage.h"
#include "OnLandedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLanded, const FMorCharacterFallStage, FallStage);

