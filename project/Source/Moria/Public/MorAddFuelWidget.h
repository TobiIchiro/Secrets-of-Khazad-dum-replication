#pragma once
#include "CoreMinimal.h"
#include "MorFuelItemData.h"
#include "MorFuelRowHandle.h"
#include "MorInteractionWidget.h"
#include "MorAddFuelWidget.generated.h"

class UMorFuelBurningComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAddFuelWidget : public UMorInteractionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorFuelBurningComponent* FuelBurningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorFuelItemData> AvailableFuels;
    
public:
    UMorAddFuelWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFuelsChanged();
    
    UFUNCTION(BlueprintCallable)
    void AddFuel(const FMorFuelRowHandle& FuelHandle);
    
};

