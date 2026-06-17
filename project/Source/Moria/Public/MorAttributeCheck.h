#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "EStatComparison.h"
#include "MorAttributeCheck.generated.h"

USTRUCT(BlueprintType)
struct FMorAttributeCheck {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatComparison Comparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute RelativeToAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    MORIA_API FMorAttributeCheck();
};

