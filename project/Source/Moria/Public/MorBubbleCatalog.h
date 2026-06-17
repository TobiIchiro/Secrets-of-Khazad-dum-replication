#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MorBubbleAutomaticReverbVolumeSettings.h"
#include "MorBubbleCatalogLogContainer.h"
#include "MorBubbleDistanceFieldParameters.h"
#include "MorSpawnableAssetCatalog.h"
#include "MorBubbleCatalog.generated.h"

class UMorBubbleDefinition;

UCLASS(Blueprintable)
class MORIA_API UMorBubbleCatalog : public UDataAsset, public IMorBubbleCatalogLogContainer {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMorBubbleDefinition*> Bubbles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLegacy64MeterVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorBubbleDistanceFieldParameters DistanceFieldParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorBubbleAutomaticReverbVolumeSettings AutomaticReverbVolumeSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSpawnableAssetCatalog SpawnableAssetCatalog;
    
    UMorBubbleCatalog();


    // Fix for true pure virtual functions not being implemented
};

