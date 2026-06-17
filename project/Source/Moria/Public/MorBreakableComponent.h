#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "BPOnHealthStateChangedDelegate.h"
#include "EMoriaTeam.h"
#include "MorBreakableBrokenState.h"
#include "MorBreakableHealthChangedState.h"
#include "MorBreakablePropertiesRowHandle.h"
#include "MorDamageTargetInterface.h"
#include "MorSaveGameObjectNative.h"
#include "MorSimpleHealthEntity.h"
#include "MorTierInterface.h"
#include "OnBreakDelegate.h"
#include "MorBreakableComponent.generated.h"

class UAkAudioEvent;
class UMorBreakableFXComponent;
class UMorBreakableMeshPiece;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorBreakableComponent : public UActorComponent, public IMorSimpleHealthEntity, public IMorSaveGameObjectNative, public IMorDamageTargetInterface, public IMorTierInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBreak OnBreak;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorBreakablePropertiesRowHandle PropertiesHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructImpulseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructImpulseForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructEffectLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorBreakableFXComponent* FXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoriaTeam Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestorable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LootDropMasterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BreakSfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentTeam, meta=(AllowPrivateAccess=true))
    EMoriaTeam CurrentTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BrokenState, meta=(AllowPrivateAccess=true))
    FMorBreakableBrokenState BrokenState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthChangedState, meta=(AllowPrivateAccess=true))
    FMorBreakableHealthChangedState HealthChangedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMorBreakableMeshPiece*> Pieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bBrokenStateSaved;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPOnHealthStateChanged BPOnHealthStateChangeEvent;
    
public:
    UMorBreakableComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTeam(EMoriaTeam NewTeam);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthChangedState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentTeam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrokenState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMoriaTeam GetTeam() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceBreak(float OverrideDestructEffectLifetime);
    

    // Fix for true pure virtual functions not being implemented
};

