#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "FGKUIScreen.h"
#include "GameplayTagContainer.h"
#include "MorRepairScreen.generated.h"

class AActor;
class AMorRepairStation;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorRepairScreen : public UFGKUIScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RootCategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Repairer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorRepairStation* RepairStation;
    
public:
    UMorRepairScreen();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryRepairingItem(FItemHandle RepairingItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemHandle> GetRepairableItems() const;
    
};

