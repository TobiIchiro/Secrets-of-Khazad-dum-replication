#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "OnLoadFinishedDelegateDelegate.h"
#include "MorLegalText.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorLegalText : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadFinishedDelegate HandleLoadFinished;
    
    UMorLegalText();

    UFUNCTION(BlueprintCallable)
    void LoadText(const FString& URL);
    
};

