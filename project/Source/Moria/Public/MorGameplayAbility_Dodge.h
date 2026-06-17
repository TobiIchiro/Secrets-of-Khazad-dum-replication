#pragma once
#include "CoreMinimal.h"
#include "TargetedMontageGameplayAbility.h"
#include "MorGameplayAbility_Dodge.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_Dodge : public UTargetedMontageGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRootMotionScale;
    
public:
    UMorGameplayAbility_Dodge();

};

