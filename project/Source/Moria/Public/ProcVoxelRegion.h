#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBase.h"
#include "EMDifficulty.h"
#include "EVoxelRegionAction.h"
#include "MorResourceContainerRowHandle.h"
#include "ProcVoxelRegion.generated.h"

class UMoriaMineralPropertyAsset;

UCLASS(Blueprintable)
class MORIA_API AProcVoxelRegion : public ATriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelRegionAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoriaMineralPropertyAsset* MineralProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorResourceContainerRowHandle OreVeinHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMDifficulty DifficultyOverride;
    
    AProcVoxelRegion(const FObjectInitializer& ObjectInitializer);

};

