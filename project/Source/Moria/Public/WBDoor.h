#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorInteractable.h"
#include "MorInteraction.h"
#include "WBDoor.generated.h"

UCLASS(Blueprintable)
class MORIA_API AWBDoor : public AMorInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction TravelInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Destination;
    
public:
    AWBDoor(const FObjectInitializer& ObjectInitializer);

};

