#pragma once
#include "CoreMinimal.h"
#include "ModularCharacterItem.h"
#include "DefaultMeshesChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDefaultMeshesChangedDelegate, TArray<FModularCharacterItem>&, Items);

