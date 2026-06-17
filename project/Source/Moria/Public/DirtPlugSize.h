#pragma once
#include "CoreMinimal.h"
#include "DirtPlugSize.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FDirtPlugSize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Depth;
    
    FDirtPlugSize();
};

