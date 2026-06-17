#pragma once
#include "CoreMinimal.h"
#include "EWaterParticleSpawnType.h"
#include "WaterColliderEventAssets.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FWaterColliderEventAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* RTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaterParticleSpawnType SpawnType;
    
    MORIA_API FWaterColliderEventAssets();
};

