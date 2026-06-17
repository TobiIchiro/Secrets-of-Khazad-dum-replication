#pragma once
#include "CoreMinimal.h"
#include "EMorCharacterCreatorSectionState.h"
#include "OnSectionStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSectionStateChanged, const EMorCharacterCreatorSectionState&, State);

