#pragma once
#include "CoreMinimal.h"
#include "MorInteraction.h"
#include "MorReceptacle.h"
#include "Templates/SubclassOf.h"
#include "EquipKegInteractSubActor.generated.h"

class AInventoryItem;
class AMorItemBase;

UCLASS(Blueprintable)
class MORIA_API AEquipKegInteractSubActor : public AMorReceptacle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction KegInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> AleMugClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AMorItemBase* OwningKeg;
    
public:
    AEquipKegInteractSubActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

