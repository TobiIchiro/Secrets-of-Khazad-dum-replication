#pragma once
#include "CoreMinimal.h"
#include "MorChargeSingingBaseInteractable.h"
#include "MorVenerationSongInteractable.generated.h"

UCLASS(Abstract, Blueprintable)
class MORIA_API AMorVenerationSongInteractable : public AMorChargeSingingBaseInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractableText;
    
public:
    AMorVenerationSongInteractable(const FObjectInitializer& ObjectInitializer);

};

