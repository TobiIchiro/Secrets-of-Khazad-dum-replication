#pragma once
#include "CoreMinimal.h"
#include "MorSettlementStoneJoinSongExternalDelegate.generated.h"

class AMorCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorSettlementStoneJoinSongExternal, AMorCharacter*, TargetCharacter);

