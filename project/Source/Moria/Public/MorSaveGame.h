#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MorSaveGame.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UMorSaveGame();

};

