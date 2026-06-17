#pragma once
#include "CoreMinimal.h"
#include "AudioCallbackInfo.h"
#include "MusicEventSignaturetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMusicEventSignaturet, FAudioCallbackInfo, SyncInfo, uint8, SongID);

