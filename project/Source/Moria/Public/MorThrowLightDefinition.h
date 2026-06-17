#pragma once
#include "CoreMinimal.h"
#include "MorItemDefinition.h"
#include "MorThrowLightDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorThrowLightDefinition : public FMorItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationSeconds;
    
    FMorThrowLightDefinition();
};

