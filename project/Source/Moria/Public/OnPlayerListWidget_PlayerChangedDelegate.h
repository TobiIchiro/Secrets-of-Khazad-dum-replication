#pragma once
#include "CoreMinimal.h"
#include "MorSharedPlayerData.h"
#include "OnPlayerListWidget_PlayerChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerListWidget_PlayerChanged, const FMorSharedPlayerData&, PlayerData);

