#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EBubbleState.h"
#include "MorChapterRowHandle.h"
#include "MorExpeditionWorldLayoutParameters.h"
#include "MorLandmarkRowHandle.h"
#include "MorVirtualWorldLayoutCatalog.h"
#include "MorVisitedBubbleData.h"
#include "MorWorldLayoutModel.h"
#include "MorWorldLayoutState.h"
#include "MorZoneRowHandle.h"
#include "NewBubbleExploredDelegate.h"
#include "NewZoneExploredDelegate.h"
#include "OnBubbleVisitedUpdatedDelegate.h"
#include "OnPlayerCellChangedDelegate.h"
#include "OnPlayerEnteredBubbleDelegate.h"
#include "OnPlayerEnteredZoneDelegate.h"
#include "OnWorldBubbleStateChangedDelegate.h"
#include "OnWorldBubbleUpdateDelegate.h"
#include "RoutingParameters.h"
#include "SyncRecord.h"
#include "WorldLayoutCell.h"
#include "WorldLayoutParameters.h"
#include "WorldVoxelParameters.h"
#include "WorldLayout.generated.h"

class AChallengeManager;
class AMorAINavigationQueryManager;
class UMorBubbleActivationManager;
class UMorBubbleCatalog;
class UMorLayoutParcelizer;
class UMorLayoutValidationComponent;
class UMorWorldTourComponent;
class UMoriaMineralPropertyAsset;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AWorldLayout : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewBubbleExplored OnNewBubbleEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewZoneExplored OnPlayerEnteredNewZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEnteredBubble OnPlayerEnteredBubble;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEnteredZone OnPlayerEnteredZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCellChanged OnPlayerCellChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VisitedBubbles, meta=(AllowPrivateAccess=true))
    TArray<FMorVisitedBubbleData> BubblesVisitedByPlayers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBubbleVisitedUpdated OnVisitedBubblesUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldLayoutParameters LayoutParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorExpeditionWorldLayoutParameters ExpeditionLayoutParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoutingParameters RoutingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldVoxelParameters VoxelParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorZoneRowHandle> ZoneFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorBubbleCatalog* BubbleCatalog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireVoxels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LocationReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoutingDirectness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowGenerationResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCuratedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSafeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoriaMineralPropertyAsset* Tier1DirtPlugMineral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoriaMineralPropertyAsset* Tier2DirtPlugMineral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPersistWorldLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplitBubbles;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CellSearchExpandAttempts;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CellSearchAttempts;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartCellActivationPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZoomieDelayFrames;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CellDeactivateFrames;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignpostDepthLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChallengeManager* ChallengeManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldBubbleStateChanged OnBubbleStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldBubbleUpdate OnBubbleUpdate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorBubbleActivationManager* BubbleActivationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorLayoutParcelizer* Parcelizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorLayoutValidationComponent* LayoutValidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorWorldTourComponent* WorldScreenshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSyncRecord> SyncData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorVirtualWorldLayoutCatalog VirtualCatalog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorWorldLayoutModel Model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorWorldLayoutState LayoutState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorAINavigationQueryManager* NavManager;
    
public:
    AWorldLayout(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector WorldToLayout(const FVector& WorldCoord) const;
    
    UFUNCTION(BlueprintCallable)
    FString WorldLayoutWarnings();
    
    UFUNCTION(BlueprintCallable)
    FString WorldInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorldLayoutBubble* TryGetBubbleAt(const FVector& WorldPosition) const;
    
    UFUNCTION(BlueprintCallable)
    void Sync(const FString& Context, int32 Checksum);
    
    UFUNCTION(BlueprintCallable)
    FString SignPostInfo(FIntVector Coord);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Sync(const FString& Node, const FString& Context, int32 Checksum);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VisitedBubbles(const TArray<FMorVisitedBubbleData>& OldData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector LayoutToWorld(const FIntVector& LayoutCoord) const;
    
    UFUNCTION(BlueprintCallable)
    FMorZoneRowHandle GetZoneHandleAt(const FVector& WorldPosition);
    
    UFUNCTION(BlueprintCallable)
    FText GetZoneDisplayNameAt(const FVector& WorldPosition);
    
    UFUNCTION(BlueprintCallable)
    FName GetZoneAt(const FVector& WorldPosition);
    
    UFUNCTION(BlueprintCallable)
    FWorldLayoutCell GetRootCellAt(const FVector& WorldPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorChapterRowHandle GetPreviousChapter(FMorChapterRowHandle ChapterId);
    
    UFUNCTION(BlueprintCallable)
    FWorldLayoutCell GetPhysicalCellAt(const FVector& WorldPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorChapterRowHandle GetNextChapter(FMorChapterRowHandle ChapterId);
    
    UFUNCTION(BlueprintCallable)
    FMorLandmarkRowHandle GetLandmarkAt(const FVector& WorldPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorChapterRowHandle GetChapterForID(int32 ChapterId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorChapterRowHandle GetChapterAt(const FVector& WorldPosition);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetCellWorldTransform(const FIntVector& Coord);
    
    UFUNCTION(BlueprintCallable)
    FVector GetCellSize();
    
    UFUNCTION(BlueprintCallable)
    FString GetCellInterfaceInfo(const FWorldLayoutCell& Cell);
    
    UFUNCTION(BlueprintCallable)
    FString GetCellInfo(const UWorldLayoutBubble* Bubble);
    
    UFUNCTION(BlueprintCallable)
    static EBubbleState GetBubbleStatusForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    FString GetBubbleHudInfo(const UWorldLayoutBubble* Bubble);
    
    UFUNCTION(BlueprintCallable)
    FText GetBubbleDepthStringOverride(const FVector& WorldPosition);
    
    UFUNCTION(BlueprintCallable)
    UWorldLayoutBubble* GetBubbleAt(const FVector& WorldPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorldLayoutBubble* BubbleAt(const FIntVector& Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreBothWorldPositionsAtSameCellDepth(const FVector& WorldPositionA, const FVector& WorldPositionB);
    
};

