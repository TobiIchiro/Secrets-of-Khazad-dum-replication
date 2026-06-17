#pragma once
#include "CoreMinimal.h"
#include "FGKAICondition_HasBlackboardValueBase.h"
#include "MorAICondition_CanDiscoverRecipes.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_CanDiscoverRecipes : public UFGKAICondition_HasBlackboardValueBase {
    GENERATED_BODY()
public:
    UMorAICondition_CanDiscoverRecipes();

};

