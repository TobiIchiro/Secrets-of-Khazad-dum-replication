#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "MorWaypointData.h"
#include "MorWaypointRowHandle.h"
#include "OnLandmarkWaypointEnteredDelegate.h"
#include "MorLandmarkWaypointMarker.generated.h"

class AMorCharacter;

UCLASS(Blueprintable)
class MORIA_API AMorLandmarkWaypointMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLandmarkWaypointEntered OnLandmarkWaypointEntered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWaypointRowHandle WaypointDataRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DiscoveryExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TriggerExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscoverWaypointOnEntry;
    
public:
    AMorLandmarkWaypointMarker(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLandmarkWaypointEnteredNotif(FGameplayTag LandmarkId, AMorCharacter* Character, bool FirstDiscovery);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorWaypointRowHandle GetWaypointRowHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorWaypointData GetWaypointData() const;
    
};

