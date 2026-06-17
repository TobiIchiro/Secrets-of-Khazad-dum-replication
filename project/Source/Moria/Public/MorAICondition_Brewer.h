#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "EBrewerConditionType.h"
#include "MorAICondition_Brewer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_Brewer : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrewerConditionType BrewConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
public:
    UMorAICondition_Brewer();

};

