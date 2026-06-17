#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "Components/ComboBoxString.h"
#include "MorComboBoxStringCustomizableLabel.generated.h"

class UWidget;

UCLASS(Blueprintable)
class MORIA_API UMorComboBoxStringCustomizableLabel : public UComboBoxString {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo LabelFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor LabelColorAndOpacity;
    
public:
    UMorComboBoxStringCustomizableLabel();

    UFUNCTION(BlueprintCallable)
    void SetLabelFont(const FSlateFontInfo& InFont);
    
    UFUNCTION(BlueprintCallable)
    void SetLabelColorAndOpacity(const FSlateColor& InColorAndOpacity);
    
private:
    UFUNCTION(BlueprintCallable)
    UWidget* CreateDefaultItemWidget(const FString& Item);
    
};

