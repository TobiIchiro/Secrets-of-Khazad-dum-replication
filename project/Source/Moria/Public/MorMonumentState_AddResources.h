#pragma once
#include "CoreMinimal.h"
#include "MorInteraction.h"
#include "MorMonumentState.h"
#include "MorMonumentState_AddResources.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMonumentState_AddResources : public UMorMonumentState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction MonumentInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction MonumentRevealInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BeaconRebuildInteractionText;
    
public:
    UMorMonumentState_AddResources();

};

