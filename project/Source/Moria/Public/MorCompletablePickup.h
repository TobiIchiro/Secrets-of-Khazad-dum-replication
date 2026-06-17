#pragma once
#include "CoreMinimal.h"
#include "MorDroppedItem.h"
#include "MorLoreRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorCompletablePickup.generated.h"

class AMorItemBase;
class UGameplayEffect;

UCLASS(Blueprintable)
class AMorCompletablePickup : public AMorDroppedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorLoreRowHandle LoreRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorItemBase> ReplacementItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplacementItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GrantedEffectOnReplacement;
    
public:
    AMorCompletablePickup(const FObjectInitializer& ObjectInitializer);

};

