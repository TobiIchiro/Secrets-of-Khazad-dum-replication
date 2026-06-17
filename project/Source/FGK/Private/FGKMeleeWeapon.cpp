#include "FGKMeleeWeapon.h"
#include "Components/SceneComponent.h"

AFGKMeleeWeapon::AFGKMeleeWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrackVelocityLocationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TrackVelocityLocationComponent"));
    this->AttackTable = NULL;
    this->bCanEverTrackVelocity = false;
    this->bShouldTrackVelocity = false;
    this->TrackVelocityLocationComponent->SetupAttachment(RootComponent);
}


