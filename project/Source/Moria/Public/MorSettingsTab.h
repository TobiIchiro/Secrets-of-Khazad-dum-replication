#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "MorSettingsTab.generated.h"

class UCanvasPanel;
class UMorSettingsElement;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorSettingsTab : public UFGKUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Container;
    
private:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMorSettingsElement>> SettingsElements;
    
public:
    UMorSettingsTab();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreOptionsSetToDefault_BP();
    
    UFUNCTION(BlueprintCallable)
    void ConfigureExplicitNavigation(UPanelWidget* Parent);
    
};

