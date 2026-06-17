#pragma once
#include "CoreMinimal.h"
#include "MorManager.h"
#include "MorFarmingManager.generated.h"

class AMorPlantedFloraReceptacle;
class AMorPlantedTreeFloraReceptacle;
class ASleepManager;
class ATimeManager;

UCLASS(Blueprintable)
class MORIA_API AMorFarmingManager : public AMorManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorPlantedTreeFloraReceptacle*> PlantedTrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorPlantedFloraReceptacle*> PlantedFloraHeap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorPlantedFloraReceptacle*> FloraUpdateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorPlantedFloraReceptacle*> FloraWaitingSleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATimeManager* CachedTimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASleepManager* CachedSleepManager;
    
public:
    AMorFarmingManager(const FObjectInitializer& ObjectInitializer);

};

