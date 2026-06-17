#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorFootstepDataManager.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;

UCLASS(Blueprintable)
class MORIA_API AMorFootstepDataManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WaterSplashAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WaterSubmergedAudioEvent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SurfaceMap[32];
    
    AMorFootstepDataManager(const FObjectInitializer& ObjectInitializer);

};

