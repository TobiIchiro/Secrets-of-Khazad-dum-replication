#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MorGameLaunchToolSessionConfiguration.h"
#include "MorGameLaunchToolConfiguration.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorGameLaunchToolConfiguration : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHostMultiplayerGame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InviteCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorGameLaunchToolSessionConfiguration SessionConfig;
    
    UMorGameLaunchToolConfiguration();

};

