#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "MorActionEffect_NpcTickCraftTime.generated.h"

class AMorCraftingStation;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_NpcTickCraftTime : public UFGKActionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StationBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetTimerAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCraftingStation* CraftingStation;
    
    UMorActionEffect_NpcTickCraftTime();

};

