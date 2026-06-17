#pragma once
#include "CoreMinimal.h"
#include "EJoinModalGameState.h"
#include "MultiplayerGame.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJoinModalGameState GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVersionMatch;
    
    MORIA_API FMultiplayerGame();
};

