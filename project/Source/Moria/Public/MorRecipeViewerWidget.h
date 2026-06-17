#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "MorConstructionRowHandle.h"
#include "MorCraftingStationData.h"
#include "MorRecipeViewerWidget.generated.h"

class UMorCraftingScreen;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorRecipeViewerWidget : public UFGKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorCraftingStationData> CraftingStationData;
    
public:
    UMorRecipeViewerWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCraftingStationDataValid(const FMorCraftingStationData& Data) const;
    
    UFUNCTION(BlueprintCallable)
    void Initalize(const UMorCraftingScreen* CraftingScreen, const TArray<FMorConstructionRowHandle>& StationsToExclude);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorCraftingStationData> GetCraftingStationRecipeData() const;
    
};

