#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MorMiningHitData.generated.h"

class AMoriaVoxelWorld;
class UAkAudioEvent;
class UMoriaMineralPropertyAsset;

USTRUCT(BlueprintType)
struct FMorMiningHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMoriaVoxelWorld* VoxelWorldRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoriaMineralPropertyAsset* MineralProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Sound;
    
    MORIA_API FMorMiningHitData();
};

