#pragma once
#include "CoreMinimal.h"
#include "MorFarmingState.h"
#include "MorInteraction.h"
#include "MorFarmingState_Growing.generated.h"

class AMorPlantedFloraReceptacle;
class UMorInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorFarmingState_Growing : public UMorFarmingState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorInventoryComponent* FarmInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorInventoryComponent* FloraInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPlantedFloraReceptacle* PlantedFlora;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction UnplantInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction TakeCurrentInteraction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextFormatNotEnoughLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextFormatTooMuchLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextFormatNoItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextFormatCantMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextFormatMaxGrowCountReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextFormatPlowSoil;
    
public:
    UMorFarmingState_Growing();

};

