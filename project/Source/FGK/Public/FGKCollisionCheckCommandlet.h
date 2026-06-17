#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "FGKCollisionCheckCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKCollisionCheckCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UFGKCollisionCheckCommandlet();

};

