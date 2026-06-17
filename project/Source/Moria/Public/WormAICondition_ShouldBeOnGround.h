#pragma once
#include "CoreMinimal.h"
#include "WormAICondition.h"
#include "WormAICondition_ShouldBeOnGround.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWormAICondition_ShouldBeOnGround : public UWormAICondition {
    GENERATED_BODY()
public:
    UWormAICondition_ShouldBeOnGround();

};

