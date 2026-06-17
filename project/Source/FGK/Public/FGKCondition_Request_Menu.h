#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "FGKCondition_Request_Menu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_Request_Menu : public UFGKCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MenuName;
    
public:
    UFGKCondition_Request_Menu();

};

