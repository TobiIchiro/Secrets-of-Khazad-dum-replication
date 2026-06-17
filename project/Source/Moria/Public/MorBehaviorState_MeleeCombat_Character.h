#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "MorBehaviorState_MeleeCombat.h"
#include "MorBehaviorState_MeleeCombat_Character.generated.h"

class AActor;
class AFGKBaseCharacter;
class AFGKCombatManager;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_MeleeCombat_Character : public UMorBehaviorState_MeleeCombat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackSlotLocationKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCombatManager* CombatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIRequestID AttackRequestId;
    
public:
    UMorBehaviorState_MeleeCombat_Character();

private:
    UFUNCTION(BlueprintCallable)
    void OnCurrentTargetChanged(TEnumAsByte<ETeamAttitude::Type> Type, AActor* NewTarget, AActor* OldTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatSlotCanceled(FAIRequestID InRequestID, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatSlotAssigned(FAIRequestID InRequestID, int32 SlotIndex, const FVector& SlotLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatRequestExpired(FAIRequestID InRequestID);
    
};

