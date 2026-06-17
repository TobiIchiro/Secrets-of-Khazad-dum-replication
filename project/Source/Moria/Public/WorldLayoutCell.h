#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CellRoutingInfo.h"
#include "EBubbleInterface.h"
#include "ECellContents.h"
#include "ELayoutInterface.h"
#include "LayoutSignPost.h"
#include "MorZoneRowHandle.h"
#include "WorldLayoutCell.generated.h"

USTRUCT(BlueprintType)
struct FWorldLayoutCell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorZoneRowHandle ZoneHandle;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELayoutInterface Faces[6];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EBubbleInterface BubbleInterface[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECellContents Contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIntVector Subcell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIntVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, FLayoutSignPost> SignPosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCellRoutingInfo RoutingInfo;
    
    MORIA_API FWorldLayoutCell();
};

