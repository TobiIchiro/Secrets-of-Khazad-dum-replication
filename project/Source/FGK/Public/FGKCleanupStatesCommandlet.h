#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "FGKCleanupStatesCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKCleanupStatesCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UFGKCleanupStatesCommandlet();

};

