#pragma once
#include "CoreMinimal.h"
#include "MorProxyIndex.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorProxyIndex {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    FMorProxyIndex();
};
FORCEINLINE uint32 GetTypeHash(const FMorProxyIndex) { return 0; }

