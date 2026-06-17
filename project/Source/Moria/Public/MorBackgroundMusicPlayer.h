#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorBackgroundMusicPlayer.generated.h"

class AMorBackgroundMusicActor;

UCLASS(Blueprintable)
class MORIA_API UMorBackgroundMusicPlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorBackgroundMusicActor* ActorForPlaying;
    
public:
    UMorBackgroundMusicPlayer();

};

