#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "FGKCondition.h"
#include "FGKCondition_CharacterBase.generated.h"

class AFGKBaseCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class FGK_API UFGKCondition_CharacterBase : public UFGKCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConditionSubjectIsTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConditionSubjectIsTarget_AI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> SubjectTargetTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Character;
    
public:
    UFGKCondition_CharacterBase();

};

