#pragma once
#include "CoreMinimal.h"
#include "GATA_Placement_RotationChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGATA_Placement_RotationChanged, float, NewRotation);

