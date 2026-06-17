#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorSimpleVolumeSpecification.h"
#include "MorDecorationVolumeData.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDecorationVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform BaseTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSimpleVolumeSpecification VolumeSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlockingFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBreakableFallback;
    
    FMorDecorationVolumeData();
};

