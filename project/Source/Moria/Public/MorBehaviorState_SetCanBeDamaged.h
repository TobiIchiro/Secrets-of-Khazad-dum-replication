#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "FGKBehaviorState.h"
#include "GameplayTagContainer.h"
#include "ESetCanBeDamagedSubject.h"
#include "MorBehaviorState_SetCanBeDamaged.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_SetCanBeDamaged : public UFGKBehaviorState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetCanBeDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESetCanBeDamagedSubject Subject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> TargetAttitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TargetMatchingTag;
    
public:
    UMorBehaviorState_SetCanBeDamaged();

};

