#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateWidgetStyle.h"
#include "MorIsoMapBubbleInterfaceStyle.h"
#include "MorIsoMapGridStyle.h"
#include "MorIsoMapHighlightStyle.h"
#include "MorIsoMapLayerStyle.h"
#include "MorIsoMapMarkerConfig.h"
#include "MorIsoMapTileBorderStyle.h"
#include "MorIsoMapVerticalInterfaceStyle.h"
#include "MorIsoMapVerticalLineStyle.h"
#include "MorIsoMapWidgetStyle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorIsoMapWidgetStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush TileBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TileMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush PlayerBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapMarkerConfig LocalPlayerMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapMarkerConfig LocalPlayerShadowMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapMarkerConfig PlayerMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapMarkerConfig PlayerShadowMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapLayerStyle TopLayerStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapLayerStyle MainLayerStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapLayerStyle BottomLayerStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsoRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsoVerticalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LayerDistanceRelative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapGridStyle GridStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapTileBorderStyle BorderStyle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapBubbleInterfaceStyle InterfaceStyles[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapVerticalInterfaceStyle VerticalInterfaceStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapMarkerConfig WaypointStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapMarkerConfig WaypointShadowMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapMarkerConfig HiddenWaypointStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapMarkerConfig HiddenWaypointShadowMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapVerticalLineStyle GoalVerticalMarkerStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapMarkerConfig GoalWaypointMarkerStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapHighlightStyle HighlightStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawZonesAsBubbles: 1;
    
    FMorIsoMapWidgetStyle();
};

