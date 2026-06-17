#pragma once
#include "CoreMinimal.h"
#include "EMerchantOfferKind.generated.h"

UENUM(BlueprintType)
enum class EMerchantOfferKind : uint8 {
    Item,
    RecipeBundle,
    Cosmetic,
};

