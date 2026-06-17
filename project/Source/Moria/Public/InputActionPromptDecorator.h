#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "InputActionPromptDecorator.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class MORIA_API UInputActionPromptDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActionMappings;
    
public:
    UInputActionPromptDecorator();

};

