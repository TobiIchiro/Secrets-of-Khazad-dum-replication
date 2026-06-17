#pragma once
#include "CoreMinimal.h"
#include "FGKCameraSettings.h"
#include "FGKCameraGaitSettings.generated.h"

USTRUCT(BlueprintType)
struct FFGKCameraGaitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKCameraSettings Walking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKCameraSettings Running;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKCameraSettings Sprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKCameraSettings Crouching;
    
    FGK_API FFGKCameraGaitSettings();
};

