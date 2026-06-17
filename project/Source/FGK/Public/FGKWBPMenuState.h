#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "FGKMenuFocusableState.h"
#include "Templates/SubclassOf.h"
#include "FGKWBPMenuState.generated.h"

class UFGKMenuWidget;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKWBPMenuState : public UFGKMenuFocusableState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKMenuWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey AnalogHorizontalKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey AnalogVerticalKey;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKMenuWidget* Widget;
    
public:
    UFGKWBPMenuState();

    UFUNCTION(BlueprintCallable)
    UFGKMenuWidget* GetWidget();
    
};

