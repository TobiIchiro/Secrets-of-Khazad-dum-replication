#pragma once
#include "CoreMinimal.h"
#include "MorChargeSingingBaseInteractable.h"
#include "MorKegSongInteractable.generated.h"

UCLASS(Abstract, Blueprintable)
class MORIA_API AMorKegSongInteractable : public AMorChargeSingingBaseInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractableText;
    
public:
    AMorKegSongInteractable(const FObjectInitializer& ObjectInitializer);

};

