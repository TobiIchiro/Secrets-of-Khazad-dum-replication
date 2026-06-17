#pragma once
#include "CoreMinimal.h"
#include "FGKCosmeticsMode.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKCosmeticsMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DisabledCosmeticSlots;
    
public:
    FFGKCosmeticsMode();
};

