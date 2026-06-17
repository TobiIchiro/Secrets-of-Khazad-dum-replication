#pragma once
#include "CoreMinimal.h"
#include "ECellDirection.h"
#include "EInterfacePlugStatus.h"
#include "OrePlugInterfaceAllocation.generated.h"

USTRUCT(BlueprintType)
struct FOrePlugInterfaceAllocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECellDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInterfacePlugStatus AllocationStatus;
    
    MORIA_API FOrePlugInterfaceAllocation();
};

