#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LayoutSignPost.generated.h"

USTRUCT(BlueprintType)
struct FLayoutSignPost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Distance;
    
    MORIA_API FLayoutSignPost();
};

