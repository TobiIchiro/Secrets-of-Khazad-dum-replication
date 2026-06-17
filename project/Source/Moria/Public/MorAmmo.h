#pragma once
#include "CoreMinimal.h"
#include "MorWeapon.h"
#include "MorAmmo.generated.h"

class UAkAudioEvent;
class UStaticMesh;

UCLASS(Blueprintable)
class MORIA_API AMorAmmo : public AMorWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ProjectileMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FlyingStartSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FlyingStopSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExplosionSFX;
    
    AMorAmmo(const FObjectInitializer& ObjectInitializer);

};

