#include "MorFluidNinjaBaseComponent.h"

UMorFluidNinjaBaseComponent::UMorFluidNinjaBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FRGOverlapFilterInclusiveObjType.AddDefaulted(4);
    this->FRGExcludeLargeOverlappingObjects = false;
    this->FRGUseTraceMeshAsInteractionVolume = false;
    this->FRGCollisionChannel = ECC_GameTraceChannel12;
    this->FRGAvailableBoneArrays.AddDefaulted(40);
    this->FRGBoneArrays.AddDefaulted(40);
    this->FRGIsOverlappingAnything = false;
    this->FRGInteractionVolume = NULL;
    this->FRGActivationVolume = NULL;
    this->FRGTraceMesh = NULL;
}

void UMorFluidNinjaBaseComponent::SetOverlapDetectionEnabled_Implementation(bool bEnabled) {
}

bool UMorFluidNinjaBaseComponent::FRGUseFRGOverlapCode() const {
    return false;
}

void UMorFluidNinjaBaseComponent::FRGRegisterInitialOverlaps() {
}

void UMorFluidNinjaBaseComponent::FRGNotifyEndOverlapComponent(AActor* OtherActor, UPrimitiveComponent* OtherComponent) {
}

void UMorFluidNinjaBaseComponent::FRGNotifyBeginOverlapComponent(AActor* OtherActor, UPrimitiveComponent* OtherComponent) {
}

UPrimitiveComponent* UMorFluidNinjaBaseComponent::FRGGetOverlapInteractionVolume() const {
    return NULL;
}

TArray<FName> UMorFluidNinjaBaseComponent::FRGGetBoneNames(int32 Index) const {
    return TArray<FName>();
}

void UMorFluidNinjaBaseComponent::FRGClearInteractionLists() {
}

void UMorFluidNinjaBaseComponent::FRGClearBoneArrays() {
}


