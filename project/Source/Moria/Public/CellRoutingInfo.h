#pragma once
#include "CoreMinimal.h"
#include "CellRoutingInfo.generated.h"

USTRUCT(BlueprintType)
struct FCellRoutingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUsedInternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUsedExternal;
    
    MORIA_API FCellRoutingInfo();
};

