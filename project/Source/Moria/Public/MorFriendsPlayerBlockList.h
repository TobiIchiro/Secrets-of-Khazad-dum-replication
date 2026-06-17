#pragma once
#include "CoreMinimal.h"
#include "MorBlockedPlayersList.h"
#include "MorFriendsPlayerBlockList.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorFriendsPlayerBlockList : public UMorBlockedPlayersList {
    GENERATED_BODY()
public:
    UMorFriendsPlayerBlockList();

};

