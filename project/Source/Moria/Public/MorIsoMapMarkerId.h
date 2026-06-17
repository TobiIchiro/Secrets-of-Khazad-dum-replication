#pragma once
#include "CoreMinimal.h"
#include "EMorIsoMapMarkerType.h"
#include "MorIsoMapMarkerId.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorIsoMapMarkerId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorIsoMapMarkerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceId;
    
    FMorIsoMapMarkerId();
};

