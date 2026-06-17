#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "WormBehaviorState.h"
#include "WormBehaviorFindAttackLocation.generated.h"

class AFGKBaseCharacter;
class AFGKCombatManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWormBehaviorFindAttackLocation : public UWormBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCombatManager* CombatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackLocationExtrapolationTime;
    
public:
    UWormBehaviorFindAttackLocation();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCombatSlotCanceled(const FAIRequestID RequestID, const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatSlotAssigned(const FAIRequestID RequestID, const int32 SlotIndex, const FVector& SlotLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatRequestExpired(const FAIRequestID RequestID);
    
};

