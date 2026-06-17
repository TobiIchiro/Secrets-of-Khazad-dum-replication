#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FGKGameMode.generated.h"

class UInventoryLoadout;

UCLASS(Blueprintable, NonTransient)
class FGK_API AFGKGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryLoadout* PlayerStartingLoadout;
    
    AFGKGameMode(const FObjectInitializer& ObjectInitializer);

};

