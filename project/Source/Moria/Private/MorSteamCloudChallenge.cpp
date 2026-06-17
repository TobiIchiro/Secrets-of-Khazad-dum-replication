#include "MorSteamCloudChallenge.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AMorSteamCloudChallenge::AMorSteamCloudChallenge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bIsWorldReady = false;
    this->bIsCloudActive = false;
    this->Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
    this->Trigger->SetupAttachment(RootComponent);
}

bool AMorSteamCloudChallenge::RemoveSteamVent(AActor* SteamVent) {
    return false;
}

void AMorSteamCloudChallenge::OnWorldGenDone() {
}

void AMorSteamCloudChallenge::OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState) {
}

int32 AMorSteamCloudChallenge::GetSteamVentNum() const {
    return 0;
}



bool AMorSteamCloudChallenge::AddSteamVent(AActor* SteamVent) {
    return false;
}


