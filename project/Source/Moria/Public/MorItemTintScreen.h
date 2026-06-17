#pragma once
#include "CoreMinimal.h"
#include "EModularCharacterSlot.h"
#include "ItemHandle.h"
#include "FGKUIScreen.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MorItemDefinition.h"
#include "MorItemTintDefinition.h"
#include "MorItemTintScreen.generated.h"

class ACharacter;
class AMorInventoryItem;
class AMorItemTintStation;
class UMorEquipComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorItemTintScreen : public UFGKUIScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RootCategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* Crafter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorItemTintStation* ItemTintStation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EModularCharacterSlot, FItemHandle> InitialEquippedArmors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorInventoryItem* InitialEquippedShieldOr2HWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorInventoryItem* TempShieldActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToRemoveWhilePreviewing;
    
public:
    UMorItemTintScreen();

    UFUNCTION(BlueprintCallable)
    void RestoreOriginalVisual(UMorEquipComponent* EquipComp);
    
    UFUNCTION(BlueprintCallable)
    void PreviewItem(const FItemHandle& TintableItem, UMorEquipComponent* EquipComp);
    
    UFUNCTION(BlueprintCallable)
    void PreviewColor(const FItemHandle& TintableItem, const FMorItemTintDefinition& SelectedTint, UMorEquipComponent* EquipComp);
    
    UFUNCTION(BlueprintCallable)
    void PayCostAndTintItem(const FItemHandle& TintableItem, const FMorItemTintDefinition& TintDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemHandle> GetItemsToTint(bool ExcludeEquipped) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorItemDefinition GetItemDefinition(const FItemHandle& ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorItemTintDefinition> GetAvailableTints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPayCost(const FMorItemTintDefinition& TintDefinition) const;
    
};

