#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "BPOnPopUpWidgetClosedDelegate.h"
#include "OnCopyToClipboardClickedDelegate.h"
#include "OnPopUpButtonClickedDelegate.h"
#include "OnPopupInputPreprocessDelegate.h"
#include "PopUpOptions.h"
#include "MorPopUpWidget.generated.h"

class UBorder;
class UMorPopUpButtonWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorPopUpWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCopyToClipboardClicked OnCopyToClipboardClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPOnPopUpWidgetClosed BP_OnPopUpWidgetClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> KeysToIntercept;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MainText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Context;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopupInputPreprocess OnPopupInputPreprocess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanUseBackKey;
    
public:
    UMorPopUpWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCopyToClipboardButton();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyPopupWidgetClosed();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializePopUp(FPopUpOptions& PopUpOptions, const FOnPopUpButtonClicked& OnPopUpButonClicked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HidePopUp();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMorPopUpButtonWidget* GetPopUpButton(uint8 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeinitializePopUp();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConfigureButtons(int32 ButtonCount);
    
};

