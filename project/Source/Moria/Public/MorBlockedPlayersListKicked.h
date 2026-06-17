#pragma once
#include "CoreMinimal.h"
#include "MorBlockedPlayersList.h"
#include "MorBlockedPlayersListKicked.generated.h"

UCLASS(Blueprintable, Config=Engine)
class MORIA_API UMorBlockedPlayersListKicked : public UMorBlockedPlayersList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCapacity;
    
public:
    UMorBlockedPlayersListKicked();

};

