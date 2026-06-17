#include "POIMarkerComponent.h"
#include "Net/UnrealNetwork.h"

UPOIMarkerComponent::UPOIMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowName = true;
    this->bShowDistance = true;
    this->bShowDepth = true;
    this->bShowText = true;
    this->bCanOverrideIconWithName = true;
    this->Icon = NULL;
}

void UPOIMarkerComponent::SetIcon(UTexture2D* InIcon) {
}

void UPOIMarkerComponent::SetDisplayName(const FText& InDisplayName, bool bInFilterDisplayName) {
}

void UPOIMarkerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPOIMarkerComponent, Icon);
    DOREPLIFETIME(UPOIMarkerComponent, DisplayText);
}


