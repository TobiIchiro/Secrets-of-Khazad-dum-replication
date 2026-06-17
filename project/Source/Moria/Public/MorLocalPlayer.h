#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "MorLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMorLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UMorLocalPlayer();

};

