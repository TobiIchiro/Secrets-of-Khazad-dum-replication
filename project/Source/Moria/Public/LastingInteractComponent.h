#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "LastingInteractComponent.generated.h"

class AActor;
class ACharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API ULastingInteractComponent : public UActorComponent {
    GENERATED_BODY()
public:
    ULastingInteractComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TargetDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void MovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void EquippedChanged();
    
};

