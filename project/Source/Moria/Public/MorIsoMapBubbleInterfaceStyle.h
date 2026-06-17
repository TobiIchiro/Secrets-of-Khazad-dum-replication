#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorIsoMapBubbleInterfaceStyle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorIsoMapBubbleInterfaceStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileColumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCutInterfaceTileFromCellTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InsideTileOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EdgeTileOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D VertexScale;
    
    FMorIsoMapBubbleInterfaceStyle();
};

