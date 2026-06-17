#pragma once
#include "CoreMinimal.h"
#include "MorSongInstanceData.h"
#include "SongEndSignaturetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSongEndSignaturet, bool, bIsAborted, uint8, SongID, const FMorSongInstanceData&, SongInstanceData);

