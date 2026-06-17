#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemHandle.h"
#include "MorNoEpicPackBuffComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorNoEpicPackBuffComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMorNoEpicPackBuffComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OwnerReset(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPrepared();
    
    UFUNCTION(BlueprintCallable)
    void ItemUnequipped(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void ItemEquipped(const FItemHandle& Item);
    
};

