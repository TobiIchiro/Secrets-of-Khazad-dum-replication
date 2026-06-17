#pragma once
#include "CoreMinimal.h"
#include "MorSocketOverride.generated.h"

USTRUCT(BlueprintType)
struct FMorSocketOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequestedSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrueSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FalseSocketName;
    
    MORIA_API FMorSocketOverride();
};

