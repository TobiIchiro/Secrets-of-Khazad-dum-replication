#pragma once
#include "CoreMinimal.h"
#include "EFGKCustomDirectionType.h"
#include "FGKCustomDirectionCondition.generated.h"

USTRUCT(BlueprintType)
struct FFGKCustomDirectionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKCustomDirectionType DirectionType;
    
    FGK_API FFGKCustomDirectionCondition();
};

