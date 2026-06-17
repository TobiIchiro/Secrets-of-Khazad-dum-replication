#pragma once
#include "CoreMinimal.h"
#include "MorAABB.h"
#include "MorArchitectureBlockProperties.h"
#include "MorArchitectureRoomVolumeProperties.h"
#include "MorArchitectureStructureProperties.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorArchitectureStructureProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAABB AABB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorArchitectureBlockProperties> Blocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StabilityFoundationBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorArchitectureRoomVolumeProperties> RoomVolumes;
    
    FMorArchitectureStructureProperties();
};

