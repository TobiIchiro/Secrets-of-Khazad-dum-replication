#pragma once
#include "CoreMinimal.h"
#include "MorRavenConstructionData.h"
#include "MorRavenConstructionDelDelegate.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "MorRavenConstructionManager.generated.h"

class AMorRavenConstruction;

UCLASS(Blueprintable)
class MORIA_API AMorRavenConstructionManager : public AMorReplicatedManager, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorRavenConstructionDel OnConstructionRecordAdded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnRavenAtLastConstruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LimitConstructionBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LimitConstructionBuildToBubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedDistanceBetweenNewConstruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 AvailableConstructionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorRavenConstructionData> ConstructionsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AMorRavenConstruction*> ActiveConstructions;
    
public:
    AMorRavenConstructionManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyActiveConstruction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpawnRavenAtLastConstruction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastSpawnedRavenConstructionId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasBuiltRavenConstruction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnRavenAtConstruction(int32 ConstructionId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyConstructionRecordExists() const;
    

    // Fix for true pure virtual functions not being implemented
};

