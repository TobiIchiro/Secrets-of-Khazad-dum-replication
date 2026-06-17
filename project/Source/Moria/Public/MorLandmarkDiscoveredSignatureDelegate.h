#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LandmarkDefinition.h"
#include "MorLandmarkDiscoveredSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorLandmarkDiscoveredSignature, FGuid, Guid, const FLandmarkDefinition&, LandmarkDef);

