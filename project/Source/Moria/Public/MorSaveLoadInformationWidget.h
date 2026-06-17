#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MorSaveLoadInformationWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorSaveLoadInformationWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ProjectVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Build;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Date;
    
public:
    UMorSaveLoadInformationWidget();

};

