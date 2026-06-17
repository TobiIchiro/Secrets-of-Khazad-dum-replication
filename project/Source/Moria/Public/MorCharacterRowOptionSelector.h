#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "MorCharacterCustomizationRowWidget.h"
#include "MorCharacterRowOptionSelector.generated.h"

class UButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterRowOptionSelector : public UMorCharacterCustomizationRowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowNav;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> NextKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> PrevKeys;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* NextButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* PreviousButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ValueLabel;
    
public:
    UMorCharacterRowOptionSelector();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnPreviousButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnNextButtonClicked();
    
};

