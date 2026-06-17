#pragma once
#include "CoreMinimal.h"
#include "FGKOptionLabeledValue.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKOptionLabeledValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FFGKOptionLabeledValue();
};

