#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "MorDamageMessage.h"
#include "MorPerfectBlockMessage.h"
#include "MorRestoreMessage.h"
#include "MorFloatingWidgetContainer.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorFloatingWidgetContainer : public UFGKUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Panel;
    
public:
    UMorFloatingWidgetContainer();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowRestoreMessage(const FMorRestoreMessage& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowPerfectBlockMessage(const FMorPerfectBlockMessage& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowDamageMessage(const FMorDamageMessage& Message);
    
};

