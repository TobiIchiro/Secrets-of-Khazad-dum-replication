#include "MorDeveloperSettings.h"

UMorDeveloperSettings::UMorDeveloperSettings() {
    this->NetworkVersion = 19;
    this->LootDropPositionVariation = 40.00f;
    this->LootDropForce = 100.00f;
    this->CrouchedMovementSoundRange = 300.00f;
    this->MeleeAttackSoundRange = 1600.00f;
    this->DroppedItemSoundRange = 1800.00f;
    this->SingingSoundRange = 2500.00f;
    this->VoxelPickaxeHitSoundRange = 2100.00f;
    this->OtherPickaxeHitSoundRange = 2100.00f;
    this->BuildingSoundRange = 800.00f;
    this->EmergenceRange = 4000.00f;
    this->LightProducerLightShaftRadiusMultiplier = 3.50f;
    this->ContextMarkerLightShaftRadiusMultiplier = 1.00f;
    this->MainLightProducerLightAmount = 20.00f;
    this->DirectLightRadiusBuffer = 400.00f;
    this->DirectLightProducerLightAmount = 50.00f;
    this->ExplicitOutdoorActorTypes.AddDefaulted(5);
    this->MaxParallelAsyncOperations = 16;
    this->GameLevels.AddDefaulted(3);
    this->BubbleCatalogHash = TEXT("8ba6da03c007da8f7c79b87b948d749a8883f3d2");
    this->BubbleCatalogHashSessionVersionLength = 6;
}


