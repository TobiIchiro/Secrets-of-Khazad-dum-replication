#pragma once
#include "CoreMinimal.h"
#include "MorCurrencyRowHandle.h"
#include "MorEconomyUpdateBalanceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorEconomyUpdateBalance, FMorCurrencyRowHandle, Currency, int32, Amount);

