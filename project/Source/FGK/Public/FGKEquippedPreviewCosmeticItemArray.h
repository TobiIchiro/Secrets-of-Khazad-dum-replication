#pragma once
#include "CoreMinimal.h"
#include "FGKEquippedCosmeticItemArray.h"
#include "FGKEquippedPreviewCosmeticItemArray.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKEquippedPreviewCosmeticItemArray : public FFGKEquippedCosmeticItemArray {
    GENERATED_BODY()
public:
    FFGKEquippedPreviewCosmeticItemArray();
};

