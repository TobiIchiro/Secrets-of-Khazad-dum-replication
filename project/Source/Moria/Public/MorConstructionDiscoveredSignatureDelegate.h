#pragma once
#include "CoreMinimal.h"
#include "MorConstructionDefinition.h"
#include "MorConstructionDiscoveredSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorConstructionDiscoveredSignature, const FMorConstructionDefinition&, ConstructionDef);

