#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConnectionEndpoint.h"
#include "EConnectionZoneRelation.h"
#include "RouteVia.h"
#include "MorLayoutConnectionInstance.generated.h"

USTRUCT(BlueprintType)
struct FMorLayoutConnectionInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, float> CostMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FConnectionEndpoint Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FConnectionEndpoint Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, FRouteVia> Route;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EConnectionZoneRelation ZoneRelation;
    
    MORIA_API FMorLayoutConnectionInstance();
};

