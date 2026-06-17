#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FGKRadialDamageEvent.h"
#include "FGKExplosiveComponent.generated.h"

class AActor;
class AFGKBaseCharacter;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKExplosiveComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Instigator;
    
public:
    UFGKExplosiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ApplyDamageToVictim(AFGKBaseCharacter* Attacker, AActor* Victim, const FFGKRadialDamageEvent& DamageEvent);
    
};

