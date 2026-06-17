#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AudioCallbackInfo.h"
#include "MorMiningSongSyncHandler.generated.h"

class AMorSingingManager;

UCLASS(Blueprintable)
class MORIA_API UMorMiningSongSyncHandler : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorSingingManager* OwningManager;
    
public:
    UMorMiningSongSyncHandler();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMusicBeat(FAudioCallbackInfo SyncInfo, const uint8 SongID);
    
};

