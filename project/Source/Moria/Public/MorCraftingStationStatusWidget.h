#pragma once
#include "CoreMinimal.h"
#include "ItemCount.h"
#include "Blueprint/UserWidget.h"
#include "MorItemRecipeDefinition.h"
#include "MorCraftingStationStatusWidget.generated.h"

class AMorCraftingStation;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCraftingStationStatusWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToResolveCollectableState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToInitialUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCraftingStation* CraftingStation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNpcCraftingTimerWidget;
    
public:
    UMorCraftingStationStatusWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateRecipe(const FMorItemRecipeDefinition& Recipe, float RemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCraftTimeProgress(float RemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCraftResults(const TArray<FItemCount>& ItemCounts);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeStationWidget(bool bIsFueledStation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCrafting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCollectable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginCrafting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginCollectable();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrafting() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeStationWidget(AMorCraftingStation* InCraftingStation, bool bIsFueledStation, bool bIsNpcCraftTimerWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnFsmEndCrafting();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnFsmEndCollectable();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnFsmBeginCrafting();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnFsmBeginCollectable();
    
    UFUNCTION(BlueprintCallable)
    void DeinitializeStationWidget(bool bResetWidget);
    
};

