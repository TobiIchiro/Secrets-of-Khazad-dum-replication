#pragma once
#include "CoreMinimal.h"
#include "MorFXManager.h"
#include "MorShadowFXManager.generated.h"

class UMorShadowFXAdapterComponent;
class UMorShadowFogComponent;
class UMorShadowFogEmitterComponent;
class UMorShadowFogRepellerComponent;

UCLASS(Blueprintable)
class MORIA_API AMorShadowFXManager : public AMorFXManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMorShadowFogEmitterComponent>> Emitters;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMorShadowFogRepellerComponent>> Repellers;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMorShadowFXAdapterComponent>> Adapters;
    
public:
    AMorShadowFXManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveManagedComponent(UMorShadowFogComponent* ShadowFogComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAdapterComponent(UMorShadowFXAdapterComponent* ShadowFXAdapterComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddManagedComponent(UMorShadowFogComponent* ShadowFogComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddAdapterComponent(UMorShadowFXAdapterComponent* ShadowFXAdapterComponent);
    
};

