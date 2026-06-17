#pragma once
#include "CoreMinimal.h"
#include "MotionCorrectionWindowParams.h"
#include "MotionCorrectionWindow.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FMotionCorrectionWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionCorrectionWindowParams Params;
    
    FMotionCorrectionWindow();
};

