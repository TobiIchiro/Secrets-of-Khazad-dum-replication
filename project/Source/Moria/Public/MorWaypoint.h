#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorWaypointData.h"
#include "MorWaypoint.generated.h"

class AMorCharacter;
class UPOIMarkerComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class MORIA_API AMorWaypoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIMarkerComponent* PoiComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWaypointData WaypointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToSwitchToDepthDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bWaypointHasBeenFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bWaypointHasGivenLore;
    
public:
    AMorWaypoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ActivateFor(const AMorCharacter* ForWhom);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorWaypointData GetWaypointData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AfterWaypointDataWasUpdated();
    
    UFUNCTION(BlueprintCallable)
    void Activate(const AMorCharacter* ForWhom);
    
};

