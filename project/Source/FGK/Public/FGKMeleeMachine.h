#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "ItemHandle.h"
#include "FGKMeleeMachine.generated.h"

class UFGKState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKMeleeMachine : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTorsoAttackMachine;
    
public:
    UFGKMeleeMachine();

protected:
    UFUNCTION(BlueprintCallable)
    void SetAttackTable();
    
    UFUNCTION(BlueprintCallable)
    void InventoryChanged(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void AddAttacksFromBehaviorFSM(UFGKState* Root);
    
};

