#include "ZGeneratorComponent.h"

UZGeneratorComponent::UZGeneratorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RockConfig = NULL;
    this->DecoConfig = NULL;
    this->PreviewDecoConfig = NULL;
    this->bResourceAndPlacementInvoker = false;
    this->AdditionalBubbleDecoConfig = NULL;
    this->GuideMesh = NULL;
    this->PreviewRockConfig = NULL;
    this->bGeneratesProcRock = true;
    this->Division1Chance = 50.00f;
    this->Division2Chance = 25.00f;
    this->Division3Chance = 12.00f;
    this->bOverrideGroundRotation = false;
    this->bOverrideGroundIntrusion = false;
    this->bOverrideGroundJitter = false;
    this->bOverrideCeilingRotation = false;
    this->bOverrideCeilingIntrusion = false;
    this->FloorGenerationType = EFloorGenType::None;
    this->bGenerateShelves = false;
    this->bGenerateOverhangs = false;
    this->bFixLedges = true;
}


