#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "EMorAIEquipType.h"
#include "MorBehaviorState_EquipItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_EquipItem : public UFGKBehaviorState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnequip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorAIEquipType TypeOfItemToEquip;
    
public:
    UMorBehaviorState_EquipItem();

};

