#pragma once
#include "CoreMinimal.h"
#include "MorItemBase.h"
#include "MorConsumableItemBase.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorConsumableItemBase : public AMorItemBase {
    GENERATED_BODY()
public:
    AMorConsumableItemBase(const FObjectInitializer& ObjectInitializer);

};

