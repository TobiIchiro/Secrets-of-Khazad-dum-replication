#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "MorLandmarkSelectionWidget.generated.h"

class UButton;
class UEditableTextBox;
class UMorLandmarkButtonWidget;
class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorLandmarkSelectionWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* LandmarkButtonsParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* SearchText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ClearSelectionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* FilterInfoLabel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorLandmarkButtonWidget> LandmarkButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMorLandmarkButtonWidget*> LandmarkButtons;
    
public:
    UMorLandmarkSelectionWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonWidgetSelected(UMorLandmarkButtonWidget* Button, bool IsSelected);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnSearchTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnClearSelectionButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCancelButtonClicked();
    
};

