#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MorAISpawnManagementInterface.generated.h"

class AMorCharacter;

UINTERFACE(Blueprintable, MinimalAPI)
class UMorAISpawnManagementInterface : public UInterface {
    GENERATED_BODY()
};

class IMorAISpawnManagementInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnAISpawnFinished(AMorCharacter* Spawned);
    
};

