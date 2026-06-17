#pragma once
#include "CoreMinimal.h"
#include "EMorBubbleCatalogUpdateMode.generated.h"

UENUM(BlueprintType)
enum class EMorBubbleCatalogUpdateMode : uint8 {
    FullUpdate,
    SkipMainCatalog,
    TemporaryCatalog,
};

