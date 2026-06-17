#pragma once
#include "CoreMinimal.h"
#include "MorCatalogedContextMarker.h"
#include "MorPermitData.h"
#include "MorPlugData.h"
#include "ProceduralDecorationPass.h"
#include "ResourceContainer.h"
#include "WorldLayoutVoxelPatch.h"
#include "MorWorldLayoutBubbleData.generated.h"

class UMorBubbleDefinition;
class UMoriaMineralPropertyAsset;

USTRUCT(BlueprintType)
struct MORIA_API FMorWorldLayoutBubbleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FResourceContainer BaseFallbackContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FResourceContainer> Containers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FResourceContainer> RedistributableContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBubbleDefinition* BubbleDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorCatalogedContextMarker> AllContextMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWorldLayoutVoxelPatch> VoxelPatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMoriaMineralPropertyAsset*> VoxelMinerals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FProceduralDecorationPass> AdditionalDecorationPasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorPlugData> InterfacePlugs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorPermitData> DwarfBaseDecoBlockers;
    
    FMorWorldLayoutBubbleData();
};

