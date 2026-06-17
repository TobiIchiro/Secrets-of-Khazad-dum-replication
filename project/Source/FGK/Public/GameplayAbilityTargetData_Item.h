#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "ItemHandle.h"
#include "GameplayAbilityTargetData_Item.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FGameplayAbilityTargetData_Item : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemHandle Item;
    
    FGameplayAbilityTargetData_Item();
};

