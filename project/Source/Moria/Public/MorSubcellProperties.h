#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMorSubcellUsageCategory.h"
#include "MorSubcellProperties.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSubcellProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FloorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidFloorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorSubcellUsageCategory UsageCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bElevatorSymbolAllowed;
    
    FMorSubcellProperties();
};

