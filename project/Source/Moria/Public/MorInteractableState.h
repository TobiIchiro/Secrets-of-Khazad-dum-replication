#pragma once
#include "CoreMinimal.h"
#include "FGKState.h"
#include "MorInteractableState.generated.h"

class IMorInteractableInterface;
class UMorInteractableInterface;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableState : public UFGKState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMorInteractableInterface> ParentInteractable;
    
public:
    UMorInteractableState();

};

