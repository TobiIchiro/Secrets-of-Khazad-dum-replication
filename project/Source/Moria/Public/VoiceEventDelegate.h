#pragma once
#include "CoreMinimal.h"
#include "VoiceEventDelegate.generated.h"

class UVoiceComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVoiceEvent, UVoiceComponent*, VoiceComponent);

