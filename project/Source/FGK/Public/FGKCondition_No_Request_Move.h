#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_No_Request_Move.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_No_Request_Move : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
public:
    UFGKCondition_No_Request_Move();

};

