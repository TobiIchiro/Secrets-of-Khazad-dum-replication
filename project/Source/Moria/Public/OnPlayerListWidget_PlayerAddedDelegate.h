#pragma once
#include "CoreMinimal.h"
#include "MorSharedPlayerData.h"
#include "OnPlayerListWidget_PlayerAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerListWidget_PlayerAdded, const FMorSharedPlayerData&, PlayerData);

