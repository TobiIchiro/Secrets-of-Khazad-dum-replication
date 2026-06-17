#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EBubbleUpdateState.h"
#include "MorAICellNavLocationQuery.h"
#include "MorAINavigationQueryManager.generated.h"

class UWorld;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AMorAINavigationQueryManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenQueryAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, FMorAICellNavLocationQuery> CellNavigationQueries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> QueuedCellsToQuery;
    
public:
    AMorAINavigationQueryManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginTearingDown(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnBubbleUpdate(const UWorldLayoutBubble* Bubble, EBubbleUpdateState NewState);
    
};

