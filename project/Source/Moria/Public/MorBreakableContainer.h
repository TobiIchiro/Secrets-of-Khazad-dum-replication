#pragma once
#include "CoreMinimal.h"
#include "MorBreakable.h"
#include "MorContainerInstance.h"
#include "MorBreakableContainer.generated.h"

class UMorInventoryComponent;

UCLASS(Blueprintable)
class MORIA_API AMorBreakableContainer : public AMorBreakable, public IMorContainerInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorInventoryComponent* Inventory;
    
    AMorBreakableContainer(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

