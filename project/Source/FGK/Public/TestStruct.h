#pragma once
#include "CoreMinimal.h"
#include "FGKHashedString.h"
#include "TestStruct.generated.h"

USTRUCT(BlueprintType)
struct FTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKHashedString HashedString;
    
    FGK_API FTestStruct();
};

