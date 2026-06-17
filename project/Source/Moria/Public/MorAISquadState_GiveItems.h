#pragma once
#include "CoreMinimal.h"
#include "FGKAISquadState.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "MorAISquadState_GiveItems.generated.h"

class AMorItemBase;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAISquadState_GiveItems : public UFGKAISquadState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AMorItemBase>, int32> ItemsToGive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPatrolMembersToReceiveItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowDuplicateItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
public:
    UMorAISquadState_GiveItems();

};

