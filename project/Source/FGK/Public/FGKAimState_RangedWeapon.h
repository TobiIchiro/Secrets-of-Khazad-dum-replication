#pragma once
#include "CoreMinimal.h"
#include "FGKAimState.h"
#include "FGKAimState_RangedWeapon.generated.h"

class AFGKRangedWeapon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKAimState_RangedWeapon : public UFGKAimState {
    GENERATED_BODY()
public:
    UFGKAimState_RangedWeapon();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFGKRangedWeapon* GetEquippedRangedWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeEquipSlotByAdditionalIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ChangeEquipSlot(const FName SocketName);
    
};

