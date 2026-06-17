#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "FGKBehaviorState.h"
#include "FGKCombatAttackWeightInterface.h"
#include "FGKMeleeAttackRow.h"
#include "FGKBehaviorState_MeleeAttack.generated.h"

class AActor;
class AFGKBaseCharacter;
class AFGKCombatManager;
class UFGKBehaviorState_MeleeAttack_Action;
class UFGKBehaviorState_MeleeAttack_GoToPosition;
class UFGKBehaviorState_MeleeAttack_LeavePosition;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_MeleeAttack : public UFGKBehaviorState, public IFGKCombatAttackWeightInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKMeleeAttackRow Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKMeleeAttackRow SelectedAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanMove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxActiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationFailureCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSlotGranted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKBehaviorState_MeleeAttack_GoToPosition* GoToPositionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKBehaviorState_MeleeAttack_Action* ActionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKBehaviorState_MeleeAttack_LeavePosition* LeavePositionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCombatManager* CombatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIRequestID MyRequestId;
    
public:
    UFGKBehaviorState_MeleeAttack();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCurrentTargetChanged(TEnumAsByte<ETeamAttitude::Type> Type, AActor* NewTarget, AActor* OldTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatSlotExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatSlotCanceled(FAIRequestID RequestID, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatSlotAssigned(FAIRequestID RequestID, int32 SlotIndex, const FVector& SlotLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatRequestExpired(FAIRequestID RequestID);
    

    // Fix for true pure virtual functions not being implemented
};

