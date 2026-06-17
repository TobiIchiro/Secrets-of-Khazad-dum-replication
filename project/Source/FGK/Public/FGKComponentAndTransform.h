#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKComponentAndTransform.generated.h"

USTRUCT(BlueprintType)
struct FFGKComponentAndTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    FGK_API FFGKComponentAndTransform();
};

