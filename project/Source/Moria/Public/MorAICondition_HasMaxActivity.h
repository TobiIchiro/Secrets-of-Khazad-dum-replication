#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_HasMaxActivity.generated.h"

class UMorNPCComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_HasMaxActivity : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorNPCComponent* NPCComponent;
    
public:
    UMorAICondition_HasMaxActivity();

};

