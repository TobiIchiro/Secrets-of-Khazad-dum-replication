#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorLeaveGameHandler.generated.h"

UCLASS(Blueprintable, Within=MoriaGameState)
class MORIA_API UMorLeaveGameHandler : public UObject {
    GENERATED_BODY()
public:
    UMorLeaveGameHandler();

};

