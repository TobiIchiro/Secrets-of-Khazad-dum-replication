#include "MorNiagaraSpawnerComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UMorNiagaraSpawnerComponent::UMorNiagaraSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->ShapeBodySetup = NULL;
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->bEnabled = true;
    this->NiagaraSystem = NULL;
    this->NiagaraSystemCullDistance = 1600.00f;
    this->SpawnedComponent = NULL;
}

bool UMorNiagaraSpawnerComponent::SpawnedComponentIsValid() {
    return false;
}

void UMorNiagaraSpawnerComponent::SetSpawnedComponentVectorParameter(const FName ParameterName, const FVector VectorValue) {
}

void UMorNiagaraSpawnerComponent::SetSpawnedComponentTextureParameter(const FName ParameterName, UTexture* Texture) {
}

void UMorNiagaraSpawnerComponent::SetSpawnedComponentObjectParameter(const FName ParameterName, UObject* Object) {
}

void UMorNiagaraSpawnerComponent::SetSpawnedComponentMaterialParameter(const FName ParameterName, UMaterialInterface* Material) {
}

void UMorNiagaraSpawnerComponent::SetSpawnedComponentIntParameter(const FName ParameterName, const int32 IntValue) {
}

void UMorNiagaraSpawnerComponent::SetSpawnedComponentFloatParameter(const FName ParameterName, const float FloatValue) {
}

void UMorNiagaraSpawnerComponent::SetSpawnedComponentColorParameter(const FName ParameterName, const FLinearColor ColorValue) {
}

void UMorNiagaraSpawnerComponent::SetSpawnedComponentBoolParameter(const FName ParameterName, const bool BoolValue) {
}


