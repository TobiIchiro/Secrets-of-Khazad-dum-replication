#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "MorFuelBurningCondition_IsBurning.generated.h"

class UMorFuelBurningComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorFuelBurningCondition_IsBurning : public UFGKCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorFuelBurningComponent* FuelBurningComponent;
    
public:
    UMorFuelBurningCondition_IsBurning();

};

