#pragma once
#include "CoreMinimal.h"
#include "MorArchitectureStabilityDependencyRef.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorArchitectureStabilityDependencyRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDecoBlocker;
    
    FMorArchitectureStabilityDependencyRef();
};

