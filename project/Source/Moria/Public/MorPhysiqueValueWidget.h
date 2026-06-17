#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMeshMorphs.h"
#include "MorPhysiqueValueWidget.generated.h"

class UButton;
class UMorCharacterCreatorWidget;
class USlider;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorPhysiqueValueWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValueChangedBlueprint, float, NewValue);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValueChangedBlueprint OnValueChangedBlueprint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* ValueSlider;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DecreaseValueButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* IncreaseValueButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DecreaseValueLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* IncreaseValueLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DecreaseValueLabelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText IncreaseValueLabelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsMeshMorph: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshMorphs MeshMorph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonValueStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorCharacterCreatorWidget* CharacterCreatorWidgetParent;
    
public:
    UMorPhysiqueValueWidget();

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnValueSliderChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnIncreaseValueButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnDecreaseValueButtonClicked();
    
};

