#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SingingWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API USingingWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoSingingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SingingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText JoinSingingText;
    
public:
    USingingWidget();

};

