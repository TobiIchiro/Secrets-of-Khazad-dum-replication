#pragma once
#include "CoreMinimal.h"
#include "MorInteraction.h"
#include "MorSettlementStoneState.h"
#include "MorSettlementStoneState_Active.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorSettlementStoneState_Active : public UMorSettlementStoneState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction SettlementStoneInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction SettlementStoneLevelUp;
    
public:
    UMorSettlementStoneState_Active();

};

