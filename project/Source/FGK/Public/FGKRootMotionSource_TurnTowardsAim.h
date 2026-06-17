#pragma once
#include "CoreMinimal.h"
#include "GameFramework/RootMotionSource.h"
#include "FGKRootMotionSource_TurnTowardsAim.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FGK_API FFGKRootMotionSource_TurnTowardsAim : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    FFGKRootMotionSource_TurnTowardsAim();
};

