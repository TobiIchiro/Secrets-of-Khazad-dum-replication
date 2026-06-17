#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "MorItemRecipeDefinition.h"
#include "MorCraftingRecipeCountWidget.generated.h"

class AMorCraftingStation;
class UMorCraftingComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCraftingRecipeCountWidget : public UFGKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorCraftingComponent* CraftingComponent;
    
public:
    UMorCraftingRecipeCountWidget();

private:
    UFUNCTION(BlueprintCallable)
    void SnapshotApplied();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewCountChanged(int32 NewCount, int32 OldNewCount);
    
private:
    UFUNCTION(BlueprintCallable)
    void ItemRecipeLearned(const FMorItemRecipeDefinition& ItemRecipe);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitStation(const AMorCraftingStation* TargetCraftingStation);
    
    UFUNCTION(BlueprintCallable)
    void InitCrafting(const UMorCraftingComponent* TargetCraftingComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNewRecipeCount() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DataViewed(const UClass* DataClass, const FName& DataName);
    
};

