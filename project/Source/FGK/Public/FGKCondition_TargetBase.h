#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_TargetBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class FGK_API UFGKCondition_TargetBase : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> ObjectTargetTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMeleeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLastMeleeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsKilledTarget;
    
public:
    UFGKCondition_TargetBase();

};

