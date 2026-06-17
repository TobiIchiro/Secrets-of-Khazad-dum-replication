#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MiningMarker.generated.h"

class AMoriaVoxelWorld;
class UMorAIBehaviorPointComponent;
class UMoriaMineralPropertyAsset;

USTRUCT(BlueprintType)
struct FMiningMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MarkerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MiningLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MiningNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorAIBehaviorPointComponent* MarkerComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CreationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoriaMineralPropertyAsset* MineralProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Preference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMoriaVoxelWorld* VoxelWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Progress;
    
    MORIA_API FMiningMarker();
};

