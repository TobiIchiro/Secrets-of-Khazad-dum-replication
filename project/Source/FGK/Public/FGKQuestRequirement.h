#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKQuestRequirement.generated.h"

UCLASS(Abstract, Blueprintable, Transient)
class FGK_API UFGKQuestRequirement : public UObject {
    GENERATED_BODY()
public:
    UFGKQuestRequirement();

};

