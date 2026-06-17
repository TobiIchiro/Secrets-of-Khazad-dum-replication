#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "MorInteractable.h"
#include "MorRequiredRecipeMaterial.h"
#include "Templates/SubclassOf.h"
#include "MorRepairStation.generated.h"

class AActor;
class ACharacter;
class UFGKActorFSMComponent;
class UMorRepairScreen;

UCLASS(Blueprintable)
class MORIA_API AMorRepairStation : public AMorInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorRepairScreen> RepairScreen;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* FSMComp;
    
public:
    AMorRepairStation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowRepairScreen(ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyRepaired(FItemHandle ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorRequiredRecipeMaterial> GetRepairCosts(const FItemHandle RepairingItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRepair(FItemHandle ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPayCost(FItemHandle RepairingItemHandle, AActor* Repairer) const;
    
};

