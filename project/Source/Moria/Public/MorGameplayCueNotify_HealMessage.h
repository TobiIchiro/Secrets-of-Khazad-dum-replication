#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "MorGameplayCueNotify_HealMessage.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorGameplayCueNotify_HealMessage : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
    AMorGameplayCueNotify_HealMessage(const FObjectInitializer& ObjectInitializer);

};

