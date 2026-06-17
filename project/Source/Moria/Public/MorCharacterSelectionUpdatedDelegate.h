#pragma once
#include "CoreMinimal.h"
#include "MorCharacterSelectionUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorCharacterSelectionUpdated, int32, NumUsedSlots, int32, NumFreeSlots, const FString&, CharacterName);

