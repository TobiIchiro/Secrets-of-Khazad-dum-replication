#pragma once
#include "CoreMinimal.h"
#include "FGKHUD.h"
#include "MoriaHUDWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMoriaHUDWidget : public UFGKHUD {
    GENERATED_BODY()
public:
    UMoriaHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSearchWidget();
    
};

