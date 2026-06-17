#pragma once
#include "CoreMinimal.h"
#include "RootMotionModifier_SkewWarp.h"
#include "FGKRootMotionModifier_SkewWarp.generated.h"

UCLASS(Blueprintable)
class FGK_API UFGKRootMotionModifier_SkewWarp : public URootMotionModifier_SkewWarp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOffsetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OffsetSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LockSocketName;
    
public:
    UFGKRootMotionModifier_SkewWarp();

};

