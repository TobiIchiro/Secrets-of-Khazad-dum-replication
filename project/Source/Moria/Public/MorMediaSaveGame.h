#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MorMediaSaveData.h"
#include "MorMediaSaveGame.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorMediaSaveGame : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMorMediaSaveData> SavedMedia;
    
public:
    UMorMediaSaveGame();

};

