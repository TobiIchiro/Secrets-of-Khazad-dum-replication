#pragma once
#include "CoreMinimal.h"
#include "MorConstructionBlockProperties.h"
#include "MorConstructionLevelCatalog.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorConstructionLevelCatalog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorConstructionBlockProperties> Blocks;
    
    FMorConstructionLevelCatalog();
};

