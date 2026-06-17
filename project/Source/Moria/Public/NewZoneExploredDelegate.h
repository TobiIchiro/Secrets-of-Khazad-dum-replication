#pragma once
#include "CoreMinimal.h"
#include "MorZoneRowHandle.h"
#include "NewZoneExploredDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNewZoneExplored, ACharacter*, PlayerCharacter, FMorZoneRowHandle, ZoneHandle);

