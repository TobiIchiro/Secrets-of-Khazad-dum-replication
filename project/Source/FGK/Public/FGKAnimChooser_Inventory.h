#pragma once
#include "CoreMinimal.h"
#include "EAnimChooserActor.h"
#include "FGKAnimChooserCondition.h"
#include "Templates/SubclassOf.h"
#include "FGKAnimChooser_Inventory.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAnimChooser_Inventory : public UFGKAnimChooserCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimChooserActor ActorToEval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquipped;
    
    UFGKAnimChooser_Inventory();

};

