#pragma once
#include "CoreMinimal.h"
#include "EMorAISpawnContext.h"
#include "ActiveSpawners.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MORIA_API FActiveSpawners {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorAISpawnContext Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> ActiveSpawners;
    
    FActiveSpawners();
};

