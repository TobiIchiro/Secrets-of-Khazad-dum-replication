#pragma once
#include "CoreMinimal.h"
#include "FGKUIScreen.h"
#include "MorLightReflectorScreen.generated.h"

class AActor;
class ACharacter;
class AMorGameplayLightReflector;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorLightReflectorScreen : public UFGKUIScreen {
    GENERATED_BODY()
public:
    UMorLightReflectorScreen();

private:
    UFUNCTION(BlueprintCallable)
    void ReflectorDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorGameplayLightReflector* GetReflector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetCharacter() const;
    
};

