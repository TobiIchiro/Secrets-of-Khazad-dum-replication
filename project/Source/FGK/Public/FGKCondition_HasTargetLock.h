#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_HasTargetLock.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_HasTargetLock : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
    UFGKCondition_HasTargetLock();

};

