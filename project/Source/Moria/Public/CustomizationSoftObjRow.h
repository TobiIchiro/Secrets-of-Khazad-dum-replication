#pragma once
#include "CoreMinimal.h"
#include "MorCustomizationTableRowBase.h"
#include "CustomizationSoftObjRow.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationSoftObjRow : public FMorCustomizationTableRowBase {
    GENERATED_BODY()
public:
    MORIA_API FCustomizationSoftObjRow();
};

