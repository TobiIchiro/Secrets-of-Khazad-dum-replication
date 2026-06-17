#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "GenericTeamAgentInterface.h"
#include "FGKBehaviorState_MoveTo.h"
#include "GameplayTagContainer.h"
#include "MorBehaviorState_MoveToLKP.generated.h"

class AActor;
class UFGKAIPerceptionComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_MoveToLKP : public UFGKBehaviorState_MoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OnBeginDialogueEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OnNothingFoundDialogueEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKAIPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TrackedActor;
    
public:
    UMorBehaviorState_MoveToLKP();

private:
    UFUNCTION(BlueprintCallable)
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentTargetChanged(TEnumAsByte<ETeamAttitude::Type> Type, AActor* NewTarget, AActor* OldTarget);
    
};

