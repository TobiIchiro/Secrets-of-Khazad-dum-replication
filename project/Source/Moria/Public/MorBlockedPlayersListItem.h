#pragma once
#include "CoreMinimal.h"
#include "MorBlockedPlayersListItem.generated.h"

class UMorBlockedPlayersList;

USTRUCT(BlueprintType)
struct MORIA_API FMorBlockedPlayersListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBlockedPlayersList* BlockedPlayersList;
    
    FMorBlockedPlayersListItem();
};

