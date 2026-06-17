#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Blueprint/UserWidget.h"
#include "MorGameLaunchToolScreen.generated.h"

class UButton;
class UCheckBox;
class UComboBoxString;
class UEditableTextBox;
class UMorComboBoxStringCustomizableLabel;
class UMorGameLaunchToolHandler;
class UMorLandmarkButtonWidget;
class UMorLandmarkSelectionWidget;
class UTextBlock;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorGameLaunchToolScreen : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorComboBoxStringCustomizableLabel* PresetComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* LevelSelectionComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* SeedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* GameTypeSingleplayerCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* GameTypeMultiplayerCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InviteCodeLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* InviteCodeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorComboBoxStringCustomizableLabel* ZoneFilterComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorLandmarkButtonWidget* StartLandmarkButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorComboBoxStringCustomizableLabel* StartingEquipmentComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorComboBoxStringCustomizableLabel* RespawnEquipmentOverrideComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorComboBoxStringCustomizableLabel* DiscoverySnapshotComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* StartGameButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* MainMenuButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* QuitButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainMenuMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorGameLaunchToolHandler* Handler;
    
public:
    UMorGameLaunchToolScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void StartSubWidgetTransition(UWidget* MainWidget, UWidget* TargetSubWidget, UWidgetAnimation* TransitionAnimation, UWidget* FocusWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartFadeOutTransition();
    
    UFUNCTION(BlueprintCallable)
    void RevertSubWidgetTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMorLandmarkSelectionWidget* OpenLandmarkSelection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializedAllLevelData();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedFadeOutTransition();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnZoneFilterComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnSubWidgetTransitionAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnStartingEquipmentComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnStartGameButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnSeedTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnRespawnEquipmentOverrideComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnQuitButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPresetComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMainMenuButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnLevelSelectionComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnInviteCodeTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnGameTypeSingleplayerCheckboxChanged(bool bIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnGameTypeMultiplayerCheckboxChanged(bool bIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnDiscoverySnapshotComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseLandmarkSelection();
    
};

