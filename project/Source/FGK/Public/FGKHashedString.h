#pragma once
#include "CoreMinimal.h"
#include "FGKHashedString.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKHashedString {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 HashValue;
    
public:
    FFGKHashedString();
};
FORCEINLINE uint32 GetTypeHash(const FFGKHashedString) { return 0; }

