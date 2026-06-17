#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MorBehaviorState_TriggerDialogue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_TriggerDialogue : public UFGKBehaviorState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DialogueEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExplicitTargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExplicitTargetTags;
    
public:
    UMorBehaviorState_TriggerDialogue();

};

