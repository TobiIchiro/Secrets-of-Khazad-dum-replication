#pragma once
#include "CoreMinimal.h"
#include "FGKInventoryItem.h"
#include "FGKWeapon.generated.h"

UCLASS(Abstract, Blueprintable)
class FGK_API AFGKWeapon : public AFGKInventoryItem {
    GENERATED_BODY()
public:
    AFGKWeapon(const FObjectInitializer& ObjectInitializer);

};

