#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnLandmarkWaypointEnteredDelegate.generated.h"

class AMorCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLandmarkWaypointEntered, FGameplayTag, LandmarkId, AMorCharacter*, Character, bool, FirstDiscovery);

