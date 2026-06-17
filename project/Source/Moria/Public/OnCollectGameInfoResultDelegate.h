#pragma once
#include "CoreMinimal.h"
#include "MultiplayerGame.h"
#include "OnCollectGameInfoResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCollectGameInfoResult, const FMultiplayerGame&, Game);

