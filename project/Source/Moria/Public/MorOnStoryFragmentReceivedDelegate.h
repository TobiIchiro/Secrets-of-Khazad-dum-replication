#pragma once
#include "CoreMinimal.h"
#include "MorLoreRowHandle.h"
#include "MorOnStoryFragmentReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnStoryFragmentReceived, const FMorLoreRowHandle&, LoreRowHandle);

