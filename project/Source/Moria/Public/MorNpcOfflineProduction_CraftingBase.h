#pragma once
#include "CoreMinimal.h"
#include "FGKInventoryPredicate.h"
#include "GameplayTagContainer.h"
#include "FuelTracking.h"
#include "MorNpcOfflineProduction.h"
#include "MorNpcOfflineProduction_CraftingBase.generated.h"

class UMorFuelBurningComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorNpcOfflineProduction_CraftingBase : public UMorNpcOfflineProduction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMorFuelBurningComponent*, FFuelTracking> FuelTrackingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFueledStation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag StationBehaviorPointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKInventoryPredicate InventoryPredicateForCrafting;
    
public:
    UMorNpcOfflineProduction_CraftingBase();

};

