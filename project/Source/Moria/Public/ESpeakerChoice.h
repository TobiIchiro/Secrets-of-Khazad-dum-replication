#pragma once
#include "CoreMinimal.h"
#include "ESpeakerChoice.generated.h"

UENUM(BlueprintType)
enum class ESpeakerChoice : uint8 {
    SpecificSpeaker,
    PreferPreviousSpeaker,
    PreferNewSpeaker,
};

