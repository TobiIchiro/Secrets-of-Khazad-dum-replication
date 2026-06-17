#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorNPCRoleRowHandle.h"
#include "MorAICondition_HasRole.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_HasRole : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCRoleRowHandle Role;
    
public:
    UMorAICondition_HasRole();

};

