#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Blueprint/UserWidget.h"
#include "FGKMenuWidget.generated.h"

class UFGKWBPMenuState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKMenuWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableEverythingOnDeFocus;
    
public:
    UFGKMenuWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationAction(const EUINavigationAction Action);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigation(const EUINavigation Action);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuAxis(const FName Action, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuAction(const FName Action);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKWBPMenuState* GetParentState() const;
    
};

