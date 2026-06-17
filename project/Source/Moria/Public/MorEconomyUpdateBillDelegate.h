#pragma once
#include "CoreMinimal.h"
#include "MorEconomyUpdateBillDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorEconomyUpdateBill, int32, ID, int32, Remaining);

