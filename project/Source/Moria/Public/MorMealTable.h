#pragma once
#include "CoreMinimal.h"
#include "MorCraftReceiver.h"
#include "MorMealTable.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorMealTable : public AMorCraftReceiver {
    GENERATED_BODY()
public:
    AMorMealTable(const FObjectInitializer& ObjectInitializer);

};

