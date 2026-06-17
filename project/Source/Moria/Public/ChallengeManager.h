#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ChallengeZoneStats.h"
#include "EBubbleState.h"
#include "EMorAINavigationQueryStatus.h"
#include "MorChallengeTrailsInCell.h"
#include "MorZoneChallengeCollection.h"
#include "MorZoneRowHandle.h"
#include "ChallengeManager.generated.h"

class AHUD;
class UCanvas;
class UWorldLayoutBubble;
class UWorldLayoutZone;

UCLASS(Blueprintable)
class MORIA_API AChallengeManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorZoneRowHandle, FMorZoneChallengeCollection> ChallengeZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UWorldLayoutZone*, FChallengeZoneStats> ZoneStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, int32> SubcellShadowCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, int32> SubcellPoisonCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, FMorChallengeTrailsInCell> TrailsInCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrailPathRefindTimer;
    
public:
    AChallengeManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnNavigationQueryFinished(const FIntVector& CellPosition, EMorAINavigationQueryStatus QueryStatus, FVector FoundLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugDraw(AHUD* HUD, UCanvas* Canvas);
    
    UFUNCTION(BlueprintCallable)
    void OnBubbleStateChanged(const UWorldLayoutBubble* Bubble, EBubbleState NewState);
    
};

