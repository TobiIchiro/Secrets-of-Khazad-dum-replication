#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorMainMenuPlayerControllerModeImpl.generated.h"

class AMorMainMenuPlayerController;

UCLASS(Abstract, Blueprintable, Within=MorMainMenuPlayerController)
class MORIA_API UMorMainMenuPlayerControllerModeImpl : public UObject {
    GENERATED_BODY()
public:
    UMorMainMenuPlayerControllerModeImpl();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorMainMenuPlayerController* GetPlayerController() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventLeftMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventLeavingMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventBeginMode();
    
};

