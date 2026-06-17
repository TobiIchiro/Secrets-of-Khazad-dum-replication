#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorZoneRowHandle.h"
#include "MorZoneDiscoveredSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMorZoneDiscoveredSignature, FGuid, Guid, const FMorZoneRowHandle&, ZoneRowHandle, bool, bManuallyTriggered, bool, bFirstDiscovery);

