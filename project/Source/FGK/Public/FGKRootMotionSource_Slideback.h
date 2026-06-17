#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "FGKRootMotionSource_Slideback.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FGK_API FFGKRootMotionSource_Slideback : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Force;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrengthOverTime;
    
    FFGKRootMotionSource_Slideback();
};

