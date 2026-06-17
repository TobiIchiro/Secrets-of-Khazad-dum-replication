#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKBehaviorState.h"
#include "MorBehaviorState_RescueSurvivorNPC.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_RescueSurvivorNPC : public UFGKBehaviorState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyRescuedNPC;
    
public:
    UMorBehaviorState_RescueSurvivorNPC();

private:
    UFUNCTION(BlueprintCallable)
    void ChangeNPCRole(FGuid NpcGuid);
    
};

