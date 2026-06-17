#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_IsDead.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_IsDead : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
    UFGKCondition_IsDead();

};

