#pragma once
#include "CoreMinimal.h"
#include "MorDataTableDelegateDelegate.generated.h"

class UDataTable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMorDataTableDelegate, UDataTable*, InDataTable);

