#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "FGKRootMotionSource_ToVelocity.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKRootMotionSource_ToVelocity : public FRootMotionSource_MoveToDynamicForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialTargetVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetVelocity;
    
    FFGKRootMotionSource_ToVelocity();
};

