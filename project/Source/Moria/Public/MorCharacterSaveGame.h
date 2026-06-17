#pragma once
#include "CoreMinimal.h"
#include "MorSaveGame.h"
#include "MorCharacterSaveGame.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorCharacterSaveGame : public UMorSaveGame {
    GENERATED_BODY()
public:
    UMorCharacterSaveGame();

};

