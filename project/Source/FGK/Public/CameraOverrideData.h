#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideData.generated.h"

class AFGKCameraOverrideSpline;
class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FCameraOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCameraOverrideSpline* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CameraAnim;
    
    FGK_API FCameraOverrideData();
};

