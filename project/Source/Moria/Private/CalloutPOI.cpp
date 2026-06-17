#include "CalloutPOI.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "POIMarkerComponent.h"

ACalloutPOI::ACalloutPOI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->POIImage = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->POIMarker = CreateDefaultSubobject<UPOIMarkerComponent>(TEXT("POIMarkerComponent"));
    this->Duration = 5.00f;
    this->POIMarker->SetupAttachment(RootComponent);
}

void ACalloutPOI::ImageChanged() {
}

void ACalloutPOI::CalloutChanged() {
}

void ACalloutPOI::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACalloutPOI, CalloutOwner);
    DOREPLIFETIME(ACalloutPOI, Target);
    DOREPLIFETIME(ACalloutPOI, HitLocation);
    DOREPLIFETIME(ACalloutPOI, POIImage);
}


