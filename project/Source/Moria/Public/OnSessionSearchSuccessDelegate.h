#pragma once
#include "CoreMinimal.h"
#include "MultiplayerSessionSettings.h"
#include "OnSessionSearchSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionSearchSuccess, const FMultiplayerSessionSettings&, SearchResult);

