#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "LootSpawnParams.h"
#include "FGKLootSpawnerComponent.generated.h"

class UFGKLootSpawnerAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKLootSpawnerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKLootSpawnerAsset* LootSpawnerData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanOnlySpawnOnce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSpawned: 1;
    
public:
    UFGKLootSpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnLoot();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastLaunchItems(const TArray<FLootSpawnParams>& SpawnParams, const FVector& InitialPosition);
    
};

