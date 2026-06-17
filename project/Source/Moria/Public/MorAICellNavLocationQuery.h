#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMorAINavigationQueryStatus.h"
#include "MorAIOnCellNavigationQueryCompletedDelegate.h"
#include "MorAICellNavLocationQuery.generated.h"

USTRUCT(BlueprintType)
struct FMorAICellNavLocationQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorAINavigationQueryStatus CurrentStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumQueryAttemptsLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIOnCellNavigationQueryCompleted OnQueryCompleted;
    
    MORIA_API FMorAICellNavLocationQuery();
};

