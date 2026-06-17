#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorZoomParams.h"
#include "MorPendingTeleport.generated.h"

class AMorVoxelInvoker;
class APlayerController;

USTRUCT(BlueprintType)
struct MORIA_API FMorPendingTeleport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoomParams ZoomParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Cell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorVoxelInvoker* VoxelInvoker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayCounter;
    
    FMorPendingTeleport();
};

