#pragma once
#include "CoreMinimal.h"
#include "MorSharedPlayerData.h"
#include "OnPlayerListWidget_PlayerRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerListWidget_PlayerRemoved, const FMorSharedPlayerData&, PlayerData);

