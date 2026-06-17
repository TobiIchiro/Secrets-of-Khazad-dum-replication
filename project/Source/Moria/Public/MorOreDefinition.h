#pragma once
#include "CoreMinimal.h"
#include "MorItemDefinition.h"
#include "MorOreDefinition.generated.h"

class UMoriaMineralPropertyAsset;

USTRUCT(BlueprintType)
struct MORIA_API FMorOreDefinition : public FMorItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMoriaMineralPropertyAsset> Mineral;
    
    FMorOreDefinition();
};

