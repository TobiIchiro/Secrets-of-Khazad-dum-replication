#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorAIShadowDragonHurtDelegate.h"
#include "MorAIShadowDragonComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorAIShadowDragonComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIShadowDragonHurt OnShadowDragonHurt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackDamageThreshhold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackForce;
    
public:
    UMorAIShadowDragonComponent(const FObjectInitializer& ObjectInitializer);

};

