#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "FGKAxisKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FFGKAxisKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> AxisMappings;
    
    FGK_API FFGKAxisKeyMapping();
};

