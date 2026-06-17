#pragma once
#include "CoreMinimal.h"
#include "FGKUIScreen.h"
#include "EOptionHandlerState.h"
#include "MorSettingsScreen.generated.h"

class UCanvasPanel;
class UMorOptionHandler;
class UMorSettingsTab;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorSettingsScreen : public UFGKUIScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMorOptionHandler> OptionHandler;
    
private:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMorSettingsTab>> SettingsTabs;
    
public:
    UMorSettingsScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void SwitchTab(UMorSettingsTab* NewTab);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowBP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateChangedToUnchanged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateChangedToSaved();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateChangedToDirty();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOptionsStateChanged(EOptionHandlerState NewState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOptionModified();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInvalidated(bool bInvalid);
    
    UFUNCTION(BlueprintCallable)
    void OnDefaultButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void HideBP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMorSettingsTab* GetFirstOpenedTab();
    
    UFUNCTION(BlueprintCallable)
    UMorSettingsTab* GetCurrentOpenedTab();
    
};

