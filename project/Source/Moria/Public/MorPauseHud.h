#pragma once
#include "CoreMinimal.h"
#include "EMorPauseState.h"
#include "MoriaHUDWidget.h"
#include "MorPauseHud.generated.h"

class AMorPauseManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorPauseHud : public UMoriaHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PauseStatesToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPauseManager* PauseManager;
    
public:
    UMorPauseHud();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePauseState(EMorPauseState PauseState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePauseDescription(const FText& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnhidePauseScreen(EMorPauseState PauseState, const FText& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenPauseScreen(EMorPauseState PauseState, const FText& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HidePauseScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClosePauseScreen(bool bWasHidden);
    
};

