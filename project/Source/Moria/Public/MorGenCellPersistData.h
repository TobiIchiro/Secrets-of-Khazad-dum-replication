#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CellRoutingInfo.h"
#include "EBubbleInterface.h"
#include "ECellContents.h"
#include "ELayoutInterface.h"
#include "OrePlugInterfaceAllocation.h"
#include "MorGenCellPersistData.generated.h"

USTRUCT(BlueprintType)
struct FMorGenCellPersistData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ZoneRowName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ELayoutInterface Faces[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBubbleInterface BubbleInterface[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOrePlugInterfaceAllocation> OrePlugInterfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECellContents Contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCellRoutingInfo RoutingInfo;
    
    MORIA_API FMorGenCellPersistData();
};

