#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "MorCharacterMachine_Station.generated.h"

class AMorInteractable;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterMachine_Station : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToGetIntoPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePawnCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorInteractable* Interactable;
    
public:
    UMorCharacterMachine_Station();

};

