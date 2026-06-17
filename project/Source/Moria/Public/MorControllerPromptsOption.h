#pragma once
#include "CoreMinimal.h"
#include "FGKOptionString.h"
#include "EMorControllerPromptOptions.h"
#include "MorControllerPromptsOption.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorControllerPromptsOption : public UFGKOptionString {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorControllerPromptOptions, FText> ControllerPromptOptionNames;
    
public:
    UMorControllerPromptsOption();

};

