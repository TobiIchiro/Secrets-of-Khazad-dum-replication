#pragma once
#include "CoreMinimal.h"
#include "EAutoUpdateBubbleCatalogMode.generated.h"

UENUM(BlueprintType)
enum class EAutoUpdateBubbleCatalogMode : uint8 {
    Disabled,
    DontSave,
    Save,
    CheckOut,
};

