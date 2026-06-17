#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InventoryLoadoutItem.h"
#include "InventoryLoadout.generated.h"

UCLASS(Blueprintable)
class FGK_API UInventoryLoadout : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoDropOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryLoadoutItem> Items;
    
    UInventoryLoadout();

};

