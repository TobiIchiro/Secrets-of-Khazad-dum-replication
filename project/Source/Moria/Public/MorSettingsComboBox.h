#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "MorSettingsElement.h"
#include "MorSettingsComboBox.generated.h"

class UComboBoxString;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorSettingsComboBox : public UMorSettingsElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* OptionComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIndexAsSelected;
    
public:
    UMorSettingsComboBox();

protected:
    UFUNCTION(BlueprintCallable)
    void OnComboBoxSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
};

