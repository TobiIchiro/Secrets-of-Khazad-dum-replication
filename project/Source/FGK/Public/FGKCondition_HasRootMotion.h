#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_HasRootMotion.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_HasRootMotion : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
    UFGKCondition_HasRootMotion();

};

