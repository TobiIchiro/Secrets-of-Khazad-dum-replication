#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MorBubbleInterfaceWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBubbleInterfaceWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BubbleInstanceLabel;
    
public:
    UMorBubbleInterfaceWidget();

};

