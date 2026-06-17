#pragma once
#include "CoreMinimal.h"
#include "FGKUIScreenHiddenEventDelegate.h"
#include "FGKUIScreenShownEventDelegate.h"
#include "FGKUIScreenTabChangedEventDelegate.h"
#include "FGKUITab.h"
#include "FGKUserWidget.h"
#include "FGKUIScreen.generated.h"

class UPanelSlot;
class UUserWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class FGKUITOOLKIT_API UFGKUIScreen : public UFGKUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKUIScreenShownEvent Shown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKUIScreenHiddenEvent Hidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableHide;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvalidateOnShown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InvalidateOnShownDepth;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKUIScreenTabChangedEvent TabChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKUITab> Tabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UUserWidget*> TabWidgetsByName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ActiveTabName;
    
public:
    UFGKUIScreen();

protected:
    UFUNCTION(BlueprintCallable)
    UUserWidget* ShowTabWithName(FName TabName);
    
public:
    UFUNCTION(BlueprintCallable)
    void Show();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnbindInputs();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabShown(const FName& TabName, UUserWidget* Tab);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabHidden(const FName& TabName, UUserWidget* Tab);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabAdded(const FName& TabName, const FText& DisplayName, UUserWidget* Tab, UPanelSlot* TabSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBindInputs();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeforeShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeforeHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAfterShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAfterHide();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowing() const;
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidgetSwitcher* GetWidgetSwitcher() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetTabWithName(FName TabName) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActiveTabName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetActiveTab() const;
    
};

