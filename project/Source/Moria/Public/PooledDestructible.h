#pragma once
#include "CoreMinimal.h"
#include "PooledDestructible.generated.h"

USTRUCT(BlueprintType)
struct FPooledDestructible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastReferenced;
    
    MORIA_API FPooledDestructible();
};

