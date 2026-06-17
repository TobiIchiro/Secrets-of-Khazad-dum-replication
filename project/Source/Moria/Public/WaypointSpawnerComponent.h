#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorWaypointData.h"
#include "WaypointSpawnerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UWaypointSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishedSpawnWaypointDynamic, int32, WaypointId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedSpawnWaypointDynamic OnFinishedSpawnWaypointDynamic;
    
    UWaypointSpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnWaypoint(FMorWaypointData WaypointData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetWaypointVisibility(int32 WaypointId, bool bNewWorldVisibility, bool bNewMinimapVisibility);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEditWaypoint(FMorWaypointData NewWaypointData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDeleteWaypoint(FMorWaypointData WaypointData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetWaypointVisibility(int32 WaypointId, bool bNewVisible);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnFinishedSpawnWaypoint(int32 WaypointId);
    
};

