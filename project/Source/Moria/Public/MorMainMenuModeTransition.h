#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorMainMenuModeTransition.generated.h"

UCLASS(Blueprintable, Within=MorMainMenuGameMode)
class MORIA_API UMorMainMenuModeTransition : public UObject {
    GENERATED_BODY()
public:
    UMorMainMenuModeTransition();

};

