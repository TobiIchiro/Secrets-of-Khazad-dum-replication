#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MorHintButtonWidget.generated.h"

class UButton;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorHintButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HintImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HintText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* HintButton;
    
public:
    UMorHintButtonWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHintImageChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHintButtonClickedInternal();
    
};

