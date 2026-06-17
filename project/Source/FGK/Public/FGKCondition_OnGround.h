#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_OnGround.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_OnGround : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceCheckGround;
    
public:
    UFGKCondition_OnGround();

};

