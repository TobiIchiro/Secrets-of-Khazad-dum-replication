#pragma once
#include "CoreMinimal.h"
#include "FGKMenuState.h"
#include "FGKMenuFocusableState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFGKMenuFocusableState : public UFGKMenuState {
    GENERATED_BODY()
public:
    UFGKMenuFocusableState();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeFocus();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesHaveFocus() const;
    
};

