#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MorLandmarkButtonWidget.generated.h"

class UButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorLandmarkButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DisplayNameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RowNameLabel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTooltipFromRowName: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSetSubduedLabelColorWhenUnselected: 1;
    
public:
    UMorLandmarkButtonWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedLandmarkRowNameChanged(const FName& NewLandmarkRowName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLandmarkRowName() const;
    
};

