#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FGKBatchCharaterAnimInstanceEvaluator.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class FGK_API UFGKBatchCharaterAnimInstanceEvaluator : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinCpuCountBatch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CpuCountBatchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinBatchSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBatchSize;
    
public:
    UFGKBatchCharaterAnimInstanceEvaluator();

};

