#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "MorSettingsElement.h"
#include "MorSettingsKeySelector.generated.h"

class UInputKeySelector;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorSettingsKeySelector : public UMorSettingsElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputKeySelector* OptionKeySelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord CurrentSelectedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputGroup;
    
public:
    UMorSettingsKeySelector();

    UFUNCTION(BlueprintCallable)
    void ResetToCurrent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeySelectedBP(FInputChord SelectedKey);
    
    UFUNCTION(BlueprintCallable)
    void OnKeySelected(FInputChord SelectedKey);
    
public:
    UFUNCTION(BlueprintCallable)
    void ConfirmSelectedKey(const FInputChord& SelectedKey);
    
};

