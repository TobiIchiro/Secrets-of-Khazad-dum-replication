#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MorSpawnedConstructable.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UMorSpawnedConstructable : public UInterface {
    GENERATED_BODY()
};

class IMorSpawnedConstructable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MorActorSpawned(AActor* Builder);
    
};

