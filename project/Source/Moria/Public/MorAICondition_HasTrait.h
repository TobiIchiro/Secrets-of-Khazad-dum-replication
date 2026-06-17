#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorNPCTraitRowHandle.h"
#include "MorAICondition_HasTrait.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_HasTrait : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCTraitRowHandle Trait;
    
public:
    UMorAICondition_HasTrait();

};

