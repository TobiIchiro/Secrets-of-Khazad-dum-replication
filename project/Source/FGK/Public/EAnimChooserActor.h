#pragma once
#include "CoreMinimal.h"
#include "EAnimChooserActor.generated.h"

UENUM(BlueprintType)
enum class EAnimChooserActor : uint8 {
    Receiver,
    Target,
    Global,
};

