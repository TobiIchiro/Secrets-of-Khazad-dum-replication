#pragma once
#include "CoreMinimal.h"
#include "MorItemBase.h"
#include "MorTradeGoodRowHandle.h"
#include "MorTradeGood.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorTradeGood : public AMorItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorTradeGoodRowHandle TradeGoodHandle;
    
    AMorTradeGood(const FObjectInitializer& ObjectInitializer);

};

