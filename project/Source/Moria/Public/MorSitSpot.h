#pragma once
#include "CoreMinimal.h"
#include "MorInteractable.h"
#include "MorInteraction.h"
#include "SitSpotMontages.h"
#include "MorSitSpot.generated.h"

class AMorCharacter;
class UMorSitSpotTransformComponent;

UCLASS(Blueprintable)
class MORIA_API AMorSitSpot : public AMorInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractText_Sit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractText_PathBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSitSpotMontages> SitSpotMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSitSpotMontages> SitSpotMontages_Mug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractRequiredDistanceToClosestTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction PrimaryInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorSitSpotTransformComponent* SitSpotTransformComponent;
    
public:
    AMorSitSpot(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RequestSitting(AMorCharacter* Interactor);
    
};

