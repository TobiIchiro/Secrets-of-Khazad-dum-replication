#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MorFocusCatcherWidget.generated.h"

class UImage;
class UMorUIFocusManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorFocusCatcherWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FocusCatcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorUIFocusManager* UIFocusManager;
    
public:
    UMorFocusCatcherWidget();

};

