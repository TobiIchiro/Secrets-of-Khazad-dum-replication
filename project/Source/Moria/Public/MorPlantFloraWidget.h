#pragma once
#include "CoreMinimal.h"
#include "MorFloraItemData.h"
#include "MorFloraReceptacleRowHandle.h"
#include "MorInteractionWidget.h"
#include "MorPlantFloraWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorPlantFloraWidget : public UMorInteractionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorFloraItemData> AvailableFloras;
    
public:
    UMorPlantFloraWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void PlantFlora(const FMorFloraReceptacleRowHandle& FloraHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlorasChanged();
    
};

