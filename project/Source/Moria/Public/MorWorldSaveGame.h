#pragma once
#include "CoreMinimal.h"
#include "MorSaveGame.h"
#include "MorWorldSaveGame.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorWorldSaveGame : public UMorSaveGame {
    GENERATED_BODY()
public:
    UMorWorldSaveGame();

};

