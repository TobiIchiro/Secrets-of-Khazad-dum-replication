#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "FGKCharacterInventorySettings.generated.h"

class AFGKProjectile;
class UInventoryLoadout;

UCLASS(Blueprintable)
class FGK_API UFGKCharacterInventorySettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUnequipAllWhenDie: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryLoadout* StartingLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AFGKProjectile>> ProjectileTypes;
    
    UFGKCharacterInventorySettings();

};

