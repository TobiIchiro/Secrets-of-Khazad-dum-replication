#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "FGKHUD.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class FGKUITOOLKIT_API UFGKHUD : public UFGKUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugVisible;
    
public:
    UFGKHUD();

    UFUNCTION(BlueprintCallable)
    void Show();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDebugVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHide();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowing() const;
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UUserWidget*> DebugGetHideableWidgets();
    
};

