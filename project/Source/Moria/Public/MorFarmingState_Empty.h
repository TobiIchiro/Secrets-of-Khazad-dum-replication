#pragma once
#include "CoreMinimal.h"
#include "EInteractState.h"
#include "MorFarmingState.h"
#include "MorInteraction.h"
#include "MorFarmingState_Empty.generated.h"

class ACharacter;
class UMorInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorFarmingState_Empty : public UMorFarmingState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorInventoryComponent* ParentInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction PlantFloraInteraction;
    
public:
    UMorFarmingState_Empty();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractState GetState(const ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetEnabledText(const FText& TextFormat, const ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDisabledText(const FText& TextFormat, const ACharacter* Interactor) const;
    
};

