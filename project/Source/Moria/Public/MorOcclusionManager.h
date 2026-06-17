#pragma once
#include "CoreMinimal.h"
#include "MorManager.h"
#include "CullVolume.h"
#include "MorOcclusionManager.generated.h"
class AMorOutdoorComponentsContainer;

UCLASS(Blueprintable)
class MORIA_API AMorOcclusionManager : public AMorManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ACullVolume>> CullVolumes;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AMorOutdoorComponentsContainer>> GeoContainers;
    
public:
    AMorOcclusionManager(const FObjectInitializer& ObjectInitializer);

};

