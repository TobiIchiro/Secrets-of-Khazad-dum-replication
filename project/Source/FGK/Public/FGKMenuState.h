#pragma once
#include "CoreMinimal.h"
#include "FGKInputState.h"
#include "FGKMenuActionMapping.h"
#include "Templates/SubclassOf.h"
#include "FGKMenuState.generated.h"

class UFGKMenuState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKMenuState : public UFGKInputState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKMenuActionMapping> MenuActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StateName;
    
    UFGKMenuState();

    UFUNCTION(BlueprintCallable)
    void SetNextMenuRequest(const FName InNextMenu);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuAxis(const FName Action, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuAction(const FName Action);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKMenuState* FindFirstMenuParentInternal(const TSubclassOf<UFGKMenuState> StateType) const;
    
};

