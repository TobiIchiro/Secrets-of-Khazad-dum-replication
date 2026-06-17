#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorNPCActivityRowHandle.h"
#include "MorAICondition_CurrentActivityIs.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_CurrentActivityIs : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCActivityRowHandle ActivityHandle;
    
public:
    UMorAICondition_CurrentActivityIs();

};

