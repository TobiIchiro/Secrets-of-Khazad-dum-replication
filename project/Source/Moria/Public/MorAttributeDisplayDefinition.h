#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "MorAttributeDisplayDefinition.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMorAttributeDisplayDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    MORIA_API FMorAttributeDisplayDefinition();
};

