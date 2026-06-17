#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorNPCActivityActionRowHandle.h"
#include "MorAICondition_CanGetActivityPoints.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_CanGetActivityPoints : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCActivityActionRowHandle ActivityAction;
    
public:
    UMorAICondition_CanGetActivityPoints();

};

