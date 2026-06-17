#pragma once
#include "CoreMinimal.h"
#include "FGKPopupButtonUsedDelegate.h"
#include "FGKUIScreen.h"
#include "FGKPopup.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGKUITOOLKIT_API UFGKPopup : public UFGKUIScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKPopupButtonUsed Confirmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKPopupButtonUsed Cancelled;
    
public:
    UFGKPopup();

    UFUNCTION(BlueprintCallable)
    void ShowWithTwoButtons(const FText Title, const FText Message, const FText ConfirmText, const FText CancelText, FFGKPopupButtonUsed OnConfirmed, const FFGKPopupButtonUsed& OnCancelled);
    
    UFUNCTION(BlueprintCallable)
    void ShowWithOneButton(const FText Title, const FText Message, const FText ButtonText, const FFGKPopupButtonUsed& OnConfirmed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowWithTwoButtons(const FText& Title, const FText& Message, const FText& ConfirmButtonText, const FText& CancelButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowWithOneButton(const FText& Title, const FText& Message, const FText& ButtonText);
    
    UFUNCTION(BlueprintCallable)
    void Confirm();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

