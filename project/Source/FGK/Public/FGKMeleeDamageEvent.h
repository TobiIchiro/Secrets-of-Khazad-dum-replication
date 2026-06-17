#pragma once
#include "CoreMinimal.h"
#include "FGKPointDamageEvent.h"
#include "FGKMeleeDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKMeleeDamageEvent : public FFGKPointDamageEvent {
    GENERATED_BODY()
public:
    FFGKMeleeDamageEvent();
};

