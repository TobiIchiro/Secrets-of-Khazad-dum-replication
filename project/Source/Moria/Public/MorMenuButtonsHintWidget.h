#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "Layout/Margin.h"
#include "Blueprint/UserWidget.h"
#include "EMorButtonsTypes.h"
#include "HintButtonsKey.h"
#include "MorHintButtonData.h"
#include "OnHintButtonClickedDelegate.h"
#include "Templates/SubclassOf.h"
#include "MorMenuButtonsHintWidget.generated.h"

class UHorizontalBox;
class UMorHintButtonWidget;
class UMorMenuButtons;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMenuButtonsHintWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDeactivateInputAfterClick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorHintButtonData> LeftHintButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorHintButtonData> CenterHintButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorHintButtonData> RightHintButtons;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHintButtonClicked OnHintButtonClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorHintButtonWidget> HintButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SpacerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* LeftHintContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* CenterHintContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* RightHintContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHintButtonsKey> ButtonsKeys;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorMenuButtons* MenuButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultHintTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin DefaultHintPadding;
    
public:
    UMorMenuButtonsHintWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAllHintButtons();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInputChanged(ECommonInputType InputType, FName ControllerName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHintWidgetGenerated(UMorHintButtonWidget* NewHintWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnHintButtonClickedInternal(EMorButtonsTypes ButtonType);
    
public:
    UFUNCTION(BlueprintCallable)
    UMorHintButtonWidget* GetHintButtonFromType(EMorButtonsTypes ButtonType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateButtonsInputHandling(bool bActivate);
    
};

