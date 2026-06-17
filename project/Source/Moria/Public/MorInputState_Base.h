#pragma once
#include "CoreMinimal.h"
#include "FGKInputState.h"
#include "MorInputState_Base.generated.h"

class AMorCharacter;
class UMorEquipComponent;
class UMorInventoryComponent;
class UMoriaAbilitySystemComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInputState_Base : public UFGKInputState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* PossessedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoriaAbilitySystemComponent* AbilityComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorInventoryComponent* InventoryComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorEquipComponent* EquipComp;
    
public:
    UMorInputState_Base();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnInputDeviceChanged();
    
};

