#pragma once
#include "CoreMinimal.h"
#include "MorGamePauseScopeDescription.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorGamePauseScopeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    FMorGamePauseScopeDescription();
};

