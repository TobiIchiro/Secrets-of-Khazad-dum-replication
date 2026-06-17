#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_NpcCanStoreActivityPoints.generated.h"

class UMorNPCComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_NpcCanStoreActivityPoints : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorNPCComponent* NPCComponent;
    
public:
    UMorAICondition_NpcCanStoreActivityPoints();

};

