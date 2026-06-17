#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RouteEdge.generated.h"

USTRUCT(BlueprintType)
struct FRouteEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIntVector A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIntVector B;
    
    MORIA_API FRouteEdge();
};

