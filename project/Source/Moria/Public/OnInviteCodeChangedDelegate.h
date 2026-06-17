#pragma once
#include "CoreMinimal.h"
#include "OnInviteCodeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInviteCodeChanged, const FString&, NewInviteCode);

