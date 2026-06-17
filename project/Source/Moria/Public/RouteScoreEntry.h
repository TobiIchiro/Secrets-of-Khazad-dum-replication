#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RouteScoreEntry.generated.h"

USTRUCT(BlueprintType)
struct FRouteScoreEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Coordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    MORIA_API FRouteScoreEntry();
};

