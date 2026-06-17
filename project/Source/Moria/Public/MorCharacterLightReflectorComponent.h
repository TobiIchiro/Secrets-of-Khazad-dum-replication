#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MorCharacterLightReflectorComponent.generated.h"

class UMorGameplayLightReflectorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorCharacterLightReflectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMorCharacterLightReflectorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopReflectorTarget();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetReflectorTarget(UMorGameplayLightReflectorComponent* TargetComp);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerRotateReflectorTo(const FRotator& TargetRotation);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerRotateReflector(const FVector& InputDirection);
    
};

