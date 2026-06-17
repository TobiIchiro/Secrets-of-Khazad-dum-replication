#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "EMorSiegeRole.h"
#include "MorAICondition_HasSiegeRole.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_HasSiegeRole : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorSiegeRole SiegeRole;
    
    UMorAICondition_HasSiegeRole();

};

