#pragma once
#include "CoreMinimal.h"
#include "FGKUIScreen.h"
#include "EMorFreeCameraInputAction.h"
#include "MorFreeCameraHUD.generated.h"

class AMorFreeCameraController;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorFreeCameraHUD : public UFGKUIScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorFreeCameraController* FreeCameraController;
    
public:
    UMorFreeCameraHUD();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPauseUnavailable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPauseBlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputAction(EMorFreeCameraInputAction InputAction, float Value);
    
};

