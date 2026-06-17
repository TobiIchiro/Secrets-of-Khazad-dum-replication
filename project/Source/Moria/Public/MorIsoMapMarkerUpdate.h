#pragma once
#include "CoreMinimal.h"
#include "EMorIsoMapMarkerUpateType.h"
#include "MorIsoMapMarkerId.h"
#include "MorIsoMapMarkerUpdate.generated.h"

USTRUCT(BlueprintType)
struct FMorIsoMapMarkerUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorIsoMapMarkerId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMorIsoMapMarkerUpateType UpdateType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LayerInt;
    
public:
    MORIA_API FMorIsoMapMarkerUpdate();
};

