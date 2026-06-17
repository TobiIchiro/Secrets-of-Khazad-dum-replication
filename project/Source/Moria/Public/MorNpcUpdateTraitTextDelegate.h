#pragma once
#include "CoreMinimal.h"
#include "MorNpcUpdateTraitTextDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorNpcUpdateTraitText, FText, NpcTraitText);

