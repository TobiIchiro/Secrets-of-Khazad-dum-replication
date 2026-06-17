#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMorAINavigationQueryStatus.h"
#include "MorAIOnCellNavigationQueryCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorAIOnCellNavigationQueryCompleted, const FIntVector&, CellPosition, EMorAINavigationQueryStatus, Status, FVector, ValidNavLocation);

