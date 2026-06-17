#pragma once
#include "CoreMinimal.h"
#include "MorSaveFileInfo.h"
#include "MorWorldSaveFileInfo.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorWorldSaveFileInfo : public FMorSaveFileInfo {
    GENERATED_BODY()
public:
    FMorWorldSaveFileInfo();
};

