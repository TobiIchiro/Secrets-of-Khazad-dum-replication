#pragma once
#include "CoreMinimal.h"
#include "FGKNetFName.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKNetFName {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
public:
    FFGKNetFName();
};

