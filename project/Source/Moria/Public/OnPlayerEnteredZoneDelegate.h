#pragma once
#include "CoreMinimal.h"
#include "OnPlayerEnteredZoneDelegate.generated.h"

class ACharacter;
class UWorldLayoutZone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerEnteredZone, ACharacter*, Character, const UWorldLayoutZone*, Zone);

