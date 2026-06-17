#pragma once
#include "CoreMinimal.h"
#include "EAutoUpdateBubbleCatalogMode.h"
#include "MorAutoUpdateBubbleCatalogOptions.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAutoUpdateBubbleCatalogOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutoUpdateBubbleCatalogMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateMainBubbleCatalog: 1;
    
    FMorAutoUpdateBubbleCatalogOptions();
};

