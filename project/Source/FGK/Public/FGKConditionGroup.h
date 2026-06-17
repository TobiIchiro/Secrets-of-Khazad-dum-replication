#pragma once
#include "CoreMinimal.h"
#include "EFGKConditionGroupType.h"
#include "FGKCondition.h"
#include "FGKConditionGroup.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKConditionGroup : public UFGKCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKConditionGroupType GroupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFGKCondition*> GroupConditions;
    
    UFGKConditionGroup();

};

