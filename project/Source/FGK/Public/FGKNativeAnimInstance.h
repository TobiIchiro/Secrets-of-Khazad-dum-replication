#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FGKNativeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKNativeAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBlendTree: 1;
    
public:
    UFGKNativeAnimInstance();

};

