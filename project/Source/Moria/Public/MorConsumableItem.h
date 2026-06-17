#pragma once
#include "CoreMinimal.h"
#include "MorConsumableItemBase.h"
#include "MorConsumableRowHandle.h"
#include "MorConsumableItem.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorConsumableItem : public AMorConsumableItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConsumableRowHandle RowHandle;
    
    AMorConsumableItem(const FObjectInitializer& ObjectInitializer);

};

