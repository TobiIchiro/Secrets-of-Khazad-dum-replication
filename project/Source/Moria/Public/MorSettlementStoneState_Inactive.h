#pragma once
#include "CoreMinimal.h"
#include "MorInteraction.h"
#include "MorSettlementStoneState.h"
#include "MorSettlementStoneState_Inactive.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorSettlementStoneState_Inactive : public UMorSettlementStoneState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction ActivateInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction MoveInteraction;
    
public:
    UMorSettlementStoneState_Inactive();

};

