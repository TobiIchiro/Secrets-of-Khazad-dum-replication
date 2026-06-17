#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMorPauseState.h"
#include "MorPauseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorPauseWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMorPauseWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOnPauseChangedBp(EMorPauseState PauseState, bool bInit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOnDescriptionChangedBp(const FText& NewDescription, const FText& OldDescription, bool bInit);
    
};

