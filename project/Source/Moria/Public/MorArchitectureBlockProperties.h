#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorAABB.h"
#include "MorArchitectureStabilityBlockProperties.h"
#include "MorArchitectureBlockProperties.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorArchitectureBlockProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAABB AABB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorArchitectureStabilityBlockProperties Stability;
    
    FMorArchitectureBlockProperties();
};

