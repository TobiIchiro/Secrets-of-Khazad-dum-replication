#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorRequiredRecipeMaterial.h"
#include "MorSaveGameObjectCallbacks.h"
#include "MorSaveGameObjectNative.h"
#include "MorTrollHideTurnToStoneMaterial.h"
#include "MorTrollHideTurnToStone.generated.h"

class ATimeManager;
class UMorGameplayLightSamplerComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorTrollHideTurnToStone : public UActorComponent, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacks {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightAmountNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorTrollHideTurnToStoneMaterial> StoneMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorRequiredRecipeMaterial> StoneStateBreakMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorGameplayLightSamplerComponent* LightSamplerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VfxDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* VFXSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_StoneStateSet, meta=(AllowPrivateAccess=true))
    uint8 bIsStoneState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATimeManager* TimeManager;
    
public:
    UMorTrollHideTurnToStone(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_StoneStateSet();
    
    UFUNCTION(BlueprintCallable)
    void BeginTransitionToStoneState();
    

    // Fix for true pure virtual functions not being implemented
};

