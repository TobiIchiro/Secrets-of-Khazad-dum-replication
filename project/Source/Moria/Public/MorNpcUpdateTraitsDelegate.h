#pragma once
#include "CoreMinimal.h"
#include "MorNPCTraitRowHandle.h"
#include "MorNpcUpdateTraitsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorNpcUpdateTraits, TArray<FMorNPCTraitRowHandle>, NpcTraits);

