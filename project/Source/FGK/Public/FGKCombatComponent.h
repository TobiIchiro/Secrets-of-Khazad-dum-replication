#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "FGKMeleeAttackRequest.h"
#include "Templates/SubclassOf.h"
#include "FGKCombatComponent.generated.h"

class AActor;
class AFGKBaseCharacter;
class UFGKComboState;
class UFGKState;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKCombatComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BoneHitDetectorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, USphereComponent*> BoneHitDetectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKComboState* CurrentComboState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UFGKState*> AttackStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKMeleeAttackRequest MeleeAttackRequest;
    
public:
    UFGKCombatComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHitDetectorOverlapBegin(UPrimitiveComponent* HitterComp, AActor* OtherActor, UPrimitiveComponent* HitComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnHitDetectorHit(UPrimitiveComponent* HitterComp, AActor* OtherActor, UPrimitiveComponent* HitComp, FVector NormalImpulse, const FHitResult& HitResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckComboAttacks();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyHit(int32 WhichActiveHit, AActor* Victim, const FHitResult& Hit, UPrimitiveComponent* HitterComp, UPrimitiveComponent* HitComp);
    
};

