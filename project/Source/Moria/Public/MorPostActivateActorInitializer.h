#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MorPostActivateActorInitializer.generated.h"

UINTERFACE(Blueprintable)
class MORIA_API UMorPostActivateActorInitializer : public UInterface {
    GENERATED_BODY()
};

class MORIA_API IMorPostActivateActorInitializer : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostActivateInitialize();
    
};

