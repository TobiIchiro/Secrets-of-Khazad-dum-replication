#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "FGKLevelInstanceCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKLevelInstanceCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UFGKLevelInstanceCommandlet();

};

