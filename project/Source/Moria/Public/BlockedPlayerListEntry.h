#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserListEntry.h"
#include "MorBlockedPlayersListItem.h"
#include "BlockedPlayerListEntry.generated.h"

UINTERFACE()
class MORIA_API UBlockedPlayerListEntry : public UUserListEntry {
    GENERATED_BODY()
};

class MORIA_API IBlockedPlayerListEntry : public IUserListEntry {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBlockedPlayerListItemSet(const FMorBlockedPlayersListItem& Item);
    
};

