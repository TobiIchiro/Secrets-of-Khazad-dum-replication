#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorDwarfOnDeathScreenFXComponent.generated.h"

class AActor;
class UCurveFloat;
class UPostProcessComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorDwarfOnDeathScreenFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
public:
    UMorDwarfOnDeathScreenFXComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnReviveOrRespawnClient(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnReviveOrRespawn(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnDeathClient(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(AActor* Actor);
    
};

