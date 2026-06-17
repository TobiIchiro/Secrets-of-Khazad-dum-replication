#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "FGKDeDupeCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKDeDupeCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UFGKDeDupeCommandlet();

};

