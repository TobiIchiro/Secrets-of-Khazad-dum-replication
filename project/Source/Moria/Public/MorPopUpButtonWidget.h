#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MorPopUpButtonWidget.generated.h"

class UButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorPopUpButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* PopUpButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ButtonIndex;
    
public:
    UMorPopUpButtonWidget();

    UFUNCTION(BlueprintCallable)
    void SetButtonText(const FText& ButtonNewText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPopUpButtonClickedEvent();
    
};

