#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityWorldReticle.h"
#include "WorldReticle_ActorInfo.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API AWorldReticle_ActorInfo : public AGameplayAbilityWorldReticle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ValidActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* InvalidActor;
    
public:
    AWorldReticle_ActorInfo(const FObjectInitializer& ObjectInitializer);

};

