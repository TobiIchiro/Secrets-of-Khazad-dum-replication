#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFGKHudVisibility.h"
#include "EFGKUIResult.h"
#include "FGKPopupButtonUsedDelegate.h"
#include "FGKUIManagerScreenEventDelegate.h"
#include "FGKUIManagerScreenEventListeners.h"
#include "FGKUIScreenToggleData.h"
#include "Templates/SubclassOf.h"
#include "FGKUIManager.generated.h"

class APlayerController;
class UDataTable;
class UFGKHUD;
class UFGKPopup;
class UFGKUIConfig;
class UFGKUIScreen;
class UInputComponent;

UCLASS(Abstract, Blueprintable)
class FGKUITOOLKIT_API UFGKUIManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKUIConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKHUD*> UnderlayHuds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKHUD*> OverlayHuds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bScreenIsPendingPushOnStack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UFGKUIScreen*> CachedScreens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FFGKUIScreenToggleData> ToggleScreens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UFGKUIScreen>, FFGKUIManagerScreenEventListeners> ScreenShownEventListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UFGKUIScreen>, FFGKUIManagerScreenEventListeners> ScreenHiddenEventListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKUIScreen*> OpenScreensStack;
    
public:
    UFGKUIManager();

    UFUNCTION(BlueprintCallable)
    void UnbindFromScreenShownEvent(TSubclassOf<UFGKUIScreen> ScreenClass, FFGKUIManagerScreenEvent Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindFromScreenHiddenEvent(TSubclassOf<UFGKUIScreen> ScreenClass, FFGKUIManagerScreenEvent Delegate);
    
    UFUNCTION(BlueprintCallable)
    UFGKPopup* ShowTwoButtonPopup(TSubclassOf<UFGKUIScreen> PopUpClass, const FText Title, const FText Message, const FText ConfirmText, const FText CancelText, FFGKPopupButtonUsed OnConfirmed, const FFGKPopupButtonUsed& OnCancelled);
    
    UFUNCTION(BlueprintCallable)
    void ShowSpecificHuds(const TArray<TSoftClassPtr<UFGKHUD>>& SpecificHuds);
    
protected:
    UFUNCTION(BlueprintCallable)
    UFGKUIScreen* ShowScreenWithRowName(UDataTable* ScreenConfigsTable, FName RowName);
    
public:
    UFUNCTION(BlueprintCallable)
    UFGKUIScreen* ShowScreen(TSubclassOf<UFGKUIScreen> ScreenClass);
    
    UFUNCTION(BlueprintCallable)
    UFGKPopup* ShowOneButtonPopup(TSubclassOf<UFGKPopup> PopUpClass, const FText Title, const FText Message, const FText ButtonText, const FFGKPopupButtonUsed& OnConfirmed);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldUIShown(bool bIsShown);
    
    UFUNCTION(BlueprintCallable)
    void SetUiInputMode();
    
    UFUNCTION(BlueprintCallable)
    void SetHudVisibility(EFGKHudVisibility Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetGameInputMode();
    
    UFUNCTION(BlueprintCallable)
    void RemoveWidgets();
    
    UFUNCTION(BlueprintCallable)
    void RemoveHuds();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnScreenTabChanged(UFGKUIScreen* ScreenInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenShown(UFGKUIScreen* ScreenInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenHidden(UFGKUIScreen* ScreenInstance);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorldUIShown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenShowing(TSubclassOf<UFGKUIScreen> ScreenClass) const;
    
    UFUNCTION(BlueprintCallable)
    void HideScreen(UFGKUIScreen* ScreenInstance);
    
    UFUNCTION(BlueprintCallable)
    void HideAllScreens();
    
    UFUNCTION(BlueprintCallable)
    UFGKUIScreen* GetScreen(TSubclassOf<UFGKUIScreen> ScreenClass);
    
    UFUNCTION(BlueprintCallable)
    UFGKHUD* GetHUD(const TSubclassOf<UFGKHUD> HudClass, EFGKUIResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHideScreen(UFGKUIScreen* ScreenInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHideAllScreens() const;
    
    UFUNCTION(BlueprintCallable)
    void BindToScreenShownEvent(TSubclassOf<UFGKUIScreen> ScreenClass, FFGKUIManagerScreenEvent Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindToScreenHiddenEvent(TSubclassOf<UFGKUIScreen> ScreenClass, FFGKUIManagerScreenEvent Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAnyScreensShowing() const;
    
};

