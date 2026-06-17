#include "TransporterPad.h"
#include "Components/SceneComponent.h"

ATransporterPad::ATransporterPad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bRequiresOptionalEntitlement = false;
    this->SpawnAssetLocation = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnAssetLocation"));
    this->SpawnAssetLocation->SetupAttachment(RootComponent);
}






bool ATransporterPad::IsValidTeleportLocator(const FProxyLocator& Locator, const UObject* WorldContextObject) {
    return false;
}

bool ATransporterPad::IsBubbleConnectionRegistered(const FGameplayTag& ConnectionId, const UObject* WorldContextObject) {
    return false;
}


