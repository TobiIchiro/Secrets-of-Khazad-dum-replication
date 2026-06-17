#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FGKAIPopulationManager.h"
#include "EBubbleUpdateState.h"
#include "EMorAINavigationQueryStatus.h"
#include "MorAICharacterZoneRoster.h"
#include "MorAISpawnManagementInterface.h"
#include "Templates/SubclassOf.h"
#include "MorAIPopulationManager.generated.h"

class AActor;
class UFGKAISquadState;
class UMorAISpawnerComponent;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AMorAIPopulationManager : public AFGKAIPopulationManager, public IMorAISpawnManagementInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMorAICharacterZoneRoster> ZoneRosters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> ZoneAssignmentSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferredSpawnLocationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedDistanceBetweenCellCenterAndNearestPermit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorAISpawnerComponent* MorSpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpawnGroupPerCell;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKAISquadState> OnLookoutSquadBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKAISquadState> GuardAreaSquadBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKAISquadState> IdleInBaseSquadBehavior;
    
    AMorAIPopulationManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpawnLimit(int32 InMaxCount);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSleepCycle(float UnusedA, float UnusedB);
    
    UFUNCTION(BlueprintCallable)
    void OnNavigationQueryFinished(const FIntVector& CellPosition, EMorAINavigationQueryStatus QueryStatus, FVector FoundLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnBubbleUpdate(const UWorldLayoutBubble* Bubble, EBubbleUpdateState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnAIDied(AActor* DeadActor);
    

    // Fix for true pure virtual functions not being implemented
};

