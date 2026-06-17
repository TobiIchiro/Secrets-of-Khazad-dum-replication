#pragma once
#include "CoreMinimal.h"
#include "MoriaGameplayAbilityTargetActor.h"
#include "GameplayAbilityTargetActor_Melee.generated.h"

UCLASS(Blueprintable)
class MORIA_API AGameplayAbilityTargetActor_Melee : public AMoriaGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    AGameplayAbilityTargetActor_Melee(const FObjectInitializer& ObjectInitializer);

};

