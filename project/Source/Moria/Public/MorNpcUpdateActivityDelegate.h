#pragma once
#include "CoreMinimal.h"
#include "MorNPCActivityRowHandle.h"
#include "MorNpcUpdateActivityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorNpcUpdateActivity, FMorNPCActivityRowHandle, NpcActivity);

