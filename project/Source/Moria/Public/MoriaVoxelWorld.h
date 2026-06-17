#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "VoxelWorld.h"
#include "MorPickCarveShape.h"
#include "Templates/SubclassOf.h"
#include "MoriaVoxelWorld.generated.h"

class AMorDroppedItem;
class AWorldLayout;
class UAkAudioEvent;
class UMaterialInterface;
class UMorVoxelEffectsComponent;
class UMoriaMineralPropertyAsset;
class UNiagaraSystem;
class UVoxelDataAsset;

UCLASS(Blueprintable)
class MORIA_API AMoriaVoxelWorld : public AVoxelWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UVoxelDataAsset>> VoxelDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorDroppedItem> DroppedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnRubbleFromOre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoriaMineralPropertyAsset* DefaultMineralProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorVoxelEffectsComponent* VoxelEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaleCarveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorPickCarveShape> CarveShapes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldLayout* WorldLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* VoxelMaterialSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UMoriaMineralPropertyAsset*> MineralPropertiesTable;
    
public:
    AMoriaVoxelWorld(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void SpawnVfxAndSound(const FHitResult& OutHit, UNiagaraSystem* VfxA, UNiagaraSystem* VfxB, UAkAudioEvent* Sound);
    
};

