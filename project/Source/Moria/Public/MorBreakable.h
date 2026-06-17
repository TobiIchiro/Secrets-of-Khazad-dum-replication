#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMorSaveGameObjectDormancyState.h"
#include "MorDamageModifierRowHandle.h"
#include "MorDeferredActorInitializer.h"
#include "MorHealthEntityProvider.h"
#include "MorProxyActorInterface.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "MorBreakable.generated.h"

class UMorBreakableComponent;
class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API AMorBreakable : public AActor, public IMorProxyActorInterface, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative, public IMorHealthEntityProvider, public IMorDeferredActorInitializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDamageModifierRowHandle> DamageModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultToNetDormant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveDormancyAwakeOnPostStore;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorBreakableComponent* BreakableComponent;
    
public:
    AMorBreakable(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetSaveGameObjectDormancyState(EMorSaveGameObjectDormancyState DormancyState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHealthStateChange();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintPreRestoreDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintPostStore();
    

    // Fix for true pure virtual functions not being implemented
};

