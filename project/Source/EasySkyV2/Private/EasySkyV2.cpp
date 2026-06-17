#include "EasySkyV2.h"

AEasySkyV2::AEasySkyV2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->enableEditorTick = true;
    this->realTimeDynamicWeatherInEditor = false;
    this->ShouldUpdateTemperatureTexture = false;
    this->UseCollisionFloorLevel = false;
    this->CollisionFloorLevel = 0.00f;
    this->CollisionFloorFadeDistance = 1.00f;
    this->bShowTemperatureDebugDraw = false;
    this->DebugDrawOpacity = 0.75f;
    this->SnowStartTemperature = 0.00f;
    this->SnowBlendSize = 4.00f;
    this->RenderTargetTemperatureVolumes = NULL;
    this->TickCounter = 0;
}

void AEasySkyV2::SortTemperatureZones() {
}

void AEasySkyV2::SetVolumetricFogGridPixelSize(int32 VolumetricFogGridPixelSize) {
}

void AEasySkyV2::SetSourceSoftAngle(UDirectionalLightComponent* DirectionalLight, float SourceSoftAngle) {
}

void AEasySkyV2::SetRenderTargetSize(UTextureRenderTarget2D* RenderTarget, int32 Value) {
}

void AEasySkyV2::SetRealTimeCapture(USkyLightComponent* SkyLightComponent, bool Enabled) {
}

void AEasySkyV2::SetLightComponentProperties(UDirectionalLightComponent* Sunlight, UDirectionalLightComponent* Moonlight, UDirectionalLightComponent* MovableThunderLight, UDirectionalLightComponent* StationaryThunderLight) {
}

void AEasySkyV2::SetConsoleVariable(const FString& Property, int32 Value) {
}

void AEasySkyV2::SetCollectionParameterScalar(UMaterialParameterCollectionInstance* CollectionInstance, FName ParameterName, float ParameterValue) {
}

void AEasySkyV2::RefreshSceneComponent(USceneComponent* SceneComponent) {
}

bool AEasySkyV2::IsWithEditor() const {
    return false;
}

FVector AEasySkyV2::GetViewLocation() {
    return FVector{};
}

void AEasySkyV2::CreateTextureFrom32BitFloat(UTextureRenderTarget2D* RenderTarget, TArray<float> Data, int32 Width, int32 Height) {
}

bool AEasySkyV2::CreateTemperatureTexture() {
    return false;
}

void AEasySkyV2::callAddRemoveTemperatureZone(const bool Add, const ATemperatureZone* TemperatureZoneActor) {
}


void AEasySkyV2::AddRemoveTemperatureZoneFunc(ATemperatureZone* TemperatureZone, bool Add) {
}


void AEasySkyV2::AddMaterialFunction(UMaterial* mat, UMaterialFunction* MaterialFunction, FName FunctionInputName, FName FunctionOutputName) {
}


