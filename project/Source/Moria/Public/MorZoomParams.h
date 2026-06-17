#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMorTeleportType.h"
#include "MorProxyInstanceId.h"
#include "MorZoomParams.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoomParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaypointId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProxyInstanceId TeleportPadProxyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbsoluteLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorTeleportType TeleportType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
public:
    FMorZoomParams();
};

