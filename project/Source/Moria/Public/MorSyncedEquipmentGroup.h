#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MorSyncedEquipmentGroup.generated.h"

USTRUCT(BlueprintType)
struct FMorSyncedEquipmentGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PrimaryItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SecondaryItemTag;
    
    MORIA_API FMorSyncedEquipmentGroup();
};

