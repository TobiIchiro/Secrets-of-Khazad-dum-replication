#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "FGKCondition_MenuSwitch.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_MenuSwitch : public UFGKCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextMenu;
    
public:
    UFGKCondition_MenuSwitch();

};

