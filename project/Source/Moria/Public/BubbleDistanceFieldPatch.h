#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMDifficulty.h"
#include "MorDistanceField.h"
#include "MorFixedBubbleVoxelCapsule.h"
#include "MorResourceContainerRowHandle.h"
#include "BubbleDistanceFieldPatch.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FBubbleDistanceFieldPatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDistanceField Field;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector FieldMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorFixedBubbleVoxelCapsule> VeinRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> EdgePointsPacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> InteriorPointsPacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorResourceContainerRowHandle OreVeinHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideOreVeinDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMDifficulty OreVeinDifficultyOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MineralIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCannotAllocateResources;
    
    FBubbleDistanceFieldPatch();
};

