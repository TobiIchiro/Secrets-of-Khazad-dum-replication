#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "Components/RichTextBlock.h"
#include "InputRichTextBlock.generated.h"

UCLASS(Blueprintable)
class MORIA_API UInputRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UInputRichTextBlock();

    UFUNCTION(BlueprintCallable)
    void RefreshLayout(ECommonInputType InputType);
    
};

