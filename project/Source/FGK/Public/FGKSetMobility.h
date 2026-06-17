#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "FGKSetMobility.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKSetMobility : public UCommandlet {
    GENERATED_BODY()
public:
    UFGKSetMobility();

};

