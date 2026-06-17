#pragma once
#include "CoreMinimal.h"
#include "MorRavenConstructionDelDelegate.generated.h"

class AMorRavenConstruction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorRavenConstructionDel, const AMorRavenConstruction*, Construction);

