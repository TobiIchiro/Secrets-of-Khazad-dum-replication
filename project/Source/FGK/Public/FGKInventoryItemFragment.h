#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKInventoryItemFragment.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class FGK_API UFGKInventoryItemFragment : public UObject {
    GENERATED_BODY()
public:
    UFGKInventoryItemFragment();

};

