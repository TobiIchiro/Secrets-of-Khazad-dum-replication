#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EBubbleState.h"
#include "EBubbleUnloadState.h"
#include "MorLandmarkRowHandle.h"
#include "MorTransporterPadInstanceProperties.h"
#include "MorVoxelCommand.h"
#include "PrefabLevelStreamData.h"
#include "ProxyLocator.h"
#include "ResourceContainer.h"
#include "Templates/SubclassOf.h"
#include "NavMeshLockVolume.h"
#include "WorldLayoutBubble.generated.h"

class AActor;
class ACullVolume;
class AMorBubbleInstance;
class AVoxelWorldVolume;
class ULevelStreamingDynamic;
class UMorBubbleDefinition;
class UMorBubbleLevelTag;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API UWorldLayoutBubble : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EBubbleState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EBubbleUnloadState UnloadState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorLandmarkRowHandle LandmarkHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIntVector RootCellPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LiveFallbackContainerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FResourceContainer> Containers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBubbleDefinition* BubbleDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorTransporterPadInstanceProperties> TransporterPads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FProxyLocator, FVector> ContentProxyLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANavMeshLockVolume* NavMeshLockVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVoxelWorldVolume* VoxelWorldVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACullVolume*> SubcellCullVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NavMeshBuildStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceRealizationLoadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ForceRealizationLoadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceRealizationDelayGameplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ForceRealizationDelayGameplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VoxelBuildStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PersistedVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PersistedEarthquakeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEarthquakePending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFirstSetupFallbackContainerFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorVoxelCommand> VoxelCarveCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastVoxelUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> ServerCarveIndexPerPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorBubbleInstance* BubbleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorBubbleLevelTag* BubbleLevelTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* LevelStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPrefabLevelStreamData> PrefabLevelStreams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* PanicLevelStream;
    
public:
    UWorldLayoutBubble();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorldLayoutBubble* TryFindStationaryBubbleParent(const AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnLevelLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorldLayoutBubble* FindStationaryBubbleParent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindBubbleActorsByName(const FName& SearchName, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindBubbleActorsByClass(TSubclassOf<AActor> SearchClass, TArray<AActor*>& OutActors) const;
    
};

