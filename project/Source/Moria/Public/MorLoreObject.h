#pragma once
#include "CoreMinimal.h"
#include "MorBreakableAttachable.h"
#include "MorInteractable.h"
#include "MorInteraction.h"
#include "MorLoreRowHandle.h"
#include "MorLoreObject.generated.h"

class AMorCharacter;

UCLASS(Blueprintable)
class MORIA_API AMorLoreObject : public AMorInteractable, public IMorBreakableAttachable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction PickUpInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorLoreRowHandle> LoreEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnPickup;
    
public:
    AMorLoreObject(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLocalInteract(AMorCharacter* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInteract(AMorCharacter* Interactor);
    

    // Fix for true pure virtual functions not being implemented
};

