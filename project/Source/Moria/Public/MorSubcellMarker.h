#pragma once
#include "CoreMinimal.h"
#include "ContentProxy.h"
#include "EMorSubcellUsageCategory.h"
#include "MorSubcellMarker.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorSubcellMarker : public AContentProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorSubcellUsageCategory UsageCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bElevatorSymbolAllowed;
    
    AMorSubcellMarker(const FObjectInitializer& ObjectInitializer);

};

