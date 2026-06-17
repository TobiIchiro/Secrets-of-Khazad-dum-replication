#include "MorArchBlockMeshComponent.h"

UMorArchBlockMeshComponent::UMorArchBlockMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayMesh = EArchBlockMeshDisplayMode::Source;
    this->bForceGeneratedMeshAtRuntime = true;
    this->bCheckToGenerateMeshesNow = false;
    this->SourceMesh = NULL;
    this->MeshPristine = NULL;
    this->MeshLowDamage = NULL;
    this->MeshMediumDamage = NULL;
    this->MeshHighDamage = NULL;
}

void UMorArchBlockMeshComponent::GenerateMeshes() {
}


