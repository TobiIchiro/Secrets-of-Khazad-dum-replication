#pragma once
#include "CoreMinimal.h"
#include "EInteractState.h"
#include "MorInteractableState.h"
#include "MorInteraction.h"
#include "MorFuelBurningState.generated.h"

class ACharacter;
class UMorFuelBurningComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorFuelBurningState : public UMorInteractableState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction AddFuelInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorFuelBurningComponent* FuelBurningComponent;
    
public:
    UMorFuelBurningState();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractState GetState(const ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetEnabledText(const FText& TextFormat, const ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDisabledText(const FText& TextFormat, const ACharacter* Interactor) const;
    
};

