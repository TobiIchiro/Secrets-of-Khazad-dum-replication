#pragma once
#include "CoreMinimal.h"
#include "FGKMovementSettings.h"
#include "FGKMovementStanceSettings.generated.h"

USTRUCT(BlueprintType)
struct FFGKMovementStanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKMovementSettings Standing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKMovementSettings Crouching;
    
    FGK_API FFGKMovementStanceSettings();
};

