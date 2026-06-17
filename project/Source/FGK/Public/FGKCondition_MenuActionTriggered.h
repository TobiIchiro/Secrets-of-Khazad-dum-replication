#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "FGKCondition_MenuActionTriggered.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_MenuActionTriggered : public UFGKCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Action;
    
    UFGKCondition_MenuActionTriggered();

};

