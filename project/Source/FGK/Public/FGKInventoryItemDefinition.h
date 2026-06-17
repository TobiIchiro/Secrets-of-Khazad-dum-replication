#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FGKInventoryItemDefinition.generated.h"

class UFGKInventoryItemFragment;

UCLASS(Blueprintable)
class UFGKInventoryItemDefinition : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFGKInventoryItemFragment*> Fragments;
    
public:
    UFGKInventoryItemDefinition();

};

