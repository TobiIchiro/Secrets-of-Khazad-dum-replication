#pragma once
#include "CoreMinimal.h"
#include "GlobalLevelInstancedMeshCatalog.h"
#include "MorBreakableInstanceLevelCatalog.h"
#include "MorCatalogedDataAsset.h"
#include "MorConstructionLevelCatalog.h"
#include "MorDecorationVolumeLevelData.h"
#include "MorLevelBreakableAttachmentDefinition.h"
#include "MorLevelContentData.generated.h"

UCLASS(Abstract, Blueprintable)
class MORIA_API UMorLevelContentData : public UMorCatalogedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalLevelInstancedMeshCatalog InstancedMeshCatalog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorBreakableInstanceLevelCatalog InstancedBreakableCatalog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionLevelCatalog ConstructionCatalog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDecorationVolumeLevelData DecoVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorLevelBreakableAttachmentDefinition BreakableAttachmentDefinition;
    
    UMorLevelContentData();

};

