#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterAnimInstance.h"
#include "WormAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class MORIA_API UWormAnimInstance : public UFGKCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimBlendTime;
    
public:
    UWormAnimInstance();

};

