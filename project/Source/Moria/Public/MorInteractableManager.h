#pragma once
#include "CoreMinimal.h"
#include "MorManager.h"
#include "MorInteractableManager.generated.h"

class IMorInteractableInterface;
class UMorInteractableInterface;

UCLASS(Blueprintable)
class MORIA_API AMorInteractableManager : public AMorManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IMorInteractableInterface>> InteractableNPCList;
    
public:
    AMorInteractableManager(const FObjectInitializer& ObjectInitializer);

};

