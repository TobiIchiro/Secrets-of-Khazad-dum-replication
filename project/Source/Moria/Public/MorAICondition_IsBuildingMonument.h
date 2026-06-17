#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorNPCRoleRowHandle.h"
#include "MorAICondition_IsBuildingMonument.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_IsBuildingMonument : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName_MonumentBehaviorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnforceRoleMatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCRoleRowHandle BuilderRole;
    
public:
    UMorAICondition_IsBuildingMonument();

};

