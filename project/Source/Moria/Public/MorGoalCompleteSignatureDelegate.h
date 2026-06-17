#pragma once
#include "CoreMinimal.h"
#include "MorLoreRowHandle.h"
#include "MorGoalCompleteSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorGoalCompleteSignature, const FMorLoreRowHandle&, LoreRowHandle);

