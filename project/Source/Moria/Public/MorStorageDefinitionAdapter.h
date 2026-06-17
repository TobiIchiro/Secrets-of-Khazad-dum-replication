#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKInventoryStorageInterface.h"
#include "MorStorageDefinitionAdapter.generated.h"

UCLASS(Blueprintable)
class UMorStorageDefinitionAdapter : public UObject, public IFGKInventoryStorageInterface {
    GENERATED_BODY()
public:
    UMorStorageDefinitionAdapter();


    // Fix for true pure virtual functions not being implemented
};

