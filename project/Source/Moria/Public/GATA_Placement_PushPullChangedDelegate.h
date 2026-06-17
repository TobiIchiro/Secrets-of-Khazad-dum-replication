#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GATA_Placement_PushPullChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGATA_Placement_PushPullChanged, const FVector&, NewPushPullOffset);

