#pragma once
#include "CoreMinimal.h"
#include "MorBreakable.h"
#include "MorConstructActionHandler.h"
#include "MorConstructionEmplacement.h"
#include "MorPostActivateActorInitializer.h"
#include "MorRavenConstruction.generated.h"

class AMorRavenGuide;
class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API AMorRavenConstruction : public AMorBreakable, public IMorPostActivateActorInitializer, public IMorConstructActionHandler, public IMorConstructionEmplacement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RavenLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepRavenSpawned, meta=(AllowPrivateAccess=true))
    AMorRavenGuide* RavenSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorRavenGuide> RavenBp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 RavenConstructionId;
    
public:
    AMorRavenConstruction(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void RavenAssetLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnRepRavenSpawned();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void FinishConstructionDestroyClient();
    
    UFUNCTION(BlueprintCallable)
    void ConstructionBroken(bool bPreRuined);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRepRavenSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FinishConstructionDestroyed();
    

    // Fix for true pure virtual functions not being implemented
};

