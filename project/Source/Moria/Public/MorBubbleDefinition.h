#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BubbleDistanceField.h"
#include "BubbleInterfaceLocator.h"
#include "BubbleInterfaceSet.h"
#include "ECellContents.h"
#include "EMorBubbleOrientation.h"
#include "EMorBubbleVisualMapStyle.h"
#include "ESplitBubble.h"
#include "EZoneAdoption.h"
#include "MorBubbleCatalogLogContainer.h"
#include "MorCatalogedContextMarker.h"
#include "MorCatalogedDataAsset.h"
#include "MorContentProxyCatalog.h"
#include "MorLandmarkWaypointProperties.h"
#include "MorSubcellProperties.h"
#include "MorBubbleDefinition.generated.h"

class UMorBubbleData;
class UMoriaMineralPropertyAsset;
class UWorld;

UCLASS(Blueprintable)
class MORIA_API UMorBubbleDefinition : public UMorCatalogedDataAsset, public IMorBubbleCatalogLogContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNexus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BubbleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorBubbleOrientation Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> RuntimeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECellContents BubbleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LandmarkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorLandmarkWaypointProperties> LandmarkWaypointProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FBubbleInterfaceLocator, FBubbleInterfaceSet> SupportedInterfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, FMorSubcellProperties> Subcells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterfacePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorBubbleVisualMapStyle VisualMapStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBuildInBubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BubbleDepthStringOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMorBubbleData> BubbleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorContentProxyCatalog ProxyCatalog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorCatalogedContextMarker> ContextMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBubbleDistanceField VoxelDistanceField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMoriaMineralPropertyAsset*> VoxelMinerals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSpawnAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZoneAdoption ZoneAdoption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplitBubble SplitBubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SplitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName BaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUniversal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsVerticalPassage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GroundFloor;
    
    UMorBubbleDefinition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalRoughVolumeCubicMeters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubcellCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProxyCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInterfaceCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlatSubcellCount(bool bRequireFloor) const;
    

    // Fix for true pure virtual functions not being implemented
};

