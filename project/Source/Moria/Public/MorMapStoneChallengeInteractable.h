#pragma once
#include "CoreMinimal.h"
#include "MorInteractable.h"
#include "MorSpawnedConstructable.h"
#include "MorMapStoneChallengeInteractable.generated.h"

UCLASS(Blueprintable)
class AMorMapStoneChallengeInteractable : public AMorInteractable, public IMorSpawnedConstructable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Discovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=HandleOnWaypointIdChanged, meta=(AllowPrivateAccess=true))
    int32 WaypointId;
    
public:
    AMorMapStoneChallengeInteractable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnWaypointIdChanged();
    

    // Fix for true pure virtual functions not being implemented
};

