#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "ENpcCraftType.h"
#include "MorActionEffect_NpcCraft.generated.h"

class AMorCraftingStation;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_NpcCraft : public UFGKActionEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcCraftType CraftType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNpcFakeCraftTimeTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCraftingStation* CraftingStation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerHungerThreshold;
    
public:
    UMorActionEffect_NpcCraft();

};

