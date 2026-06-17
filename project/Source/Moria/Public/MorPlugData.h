#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BubbleInterfaceLocator.h"
#include "EBubbleInterface.h"
#include "EMorBubbleOrientation.h"
#include "EPlugType.h"
#include "MorZoneRowHandle.h"
#include "MorPlugData.generated.h"

USTRUCT(BlueprintType)
struct FMorPlugData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EPlugType PlugType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorZoneRowHandle Zone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FBubbleInterfaceLocator Interface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EBubbleInterface InterfaceShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMorBubbleOrientation BubbleOrientation;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 InterfaceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector2D PrimaryFaceOrePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector2D SecondaryFaceOrePosition;
    
    MORIA_API FMorPlugData();
};

