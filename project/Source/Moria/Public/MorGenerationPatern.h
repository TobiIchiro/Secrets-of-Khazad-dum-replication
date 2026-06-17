#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorGenerationPatern.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorGenerationPatern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> SpawnPatern;
    
    FMorGenerationPatern();
};

