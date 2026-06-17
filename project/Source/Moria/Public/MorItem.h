#pragma once
#include "CoreMinimal.h"
#include "MorItemBase.h"
#include "MorItemRowHandle.h"
#include "MorItem.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorItem : public AMorItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorItemRowHandle RowHandle;
    
    AMorItem(const FObjectInitializer& ObjectInitializer);

};

