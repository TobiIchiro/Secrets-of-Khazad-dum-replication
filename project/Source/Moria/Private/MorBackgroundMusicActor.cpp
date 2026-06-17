#include "MorBackgroundMusicActor.h"
#include "AkComponent.h"

AMorBackgroundMusicActor::AMorBackgroundMusicActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("BackgroundMusicAkComponent"));
    this->AkComponent = (UAkComponent*)RootComponent;
}


