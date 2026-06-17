#include "ZoneDefinition.h"

FZoneDefinition::FZoneDefinition() {
    this->ZoneSet = EZoneSet::Moria;
    this->bPositionFromLandmarks = false;
    this->bPositionFromZoneTable = false;
    this->LightingInfo = NULL;
    this->ZoneLightingBehavior = EMorZoneLightingBehavior::Normal;
    this->VisualMapStyle = EMorBubbleVisualMapStyle::Urban;
    this->ToastAppearance = EMorZoneToastAppearance::None;
    this->ZoneTemperature = 0.00f;
    this->WaterPrevalence = 0.00f;
    this->LightPrevalence = 0.00f;
    this->LightingCurve = NULL;
    this->bUseTemplate = false;
    this->TargetBubbles = 0;
    this->NewBubbleChance = 0.00f;
    this->AdditionalOpeningChance = 0.00f;
    this->GenerationPriority = 0;
    this->ParcelType = EParcelType::Fixed;
    this->AutoConnections = ESandboxAutoConnection::All;
    this->bWorldNexus = false;
    this->bExtendFootprint = false;
    this->SpecialOptions = EParcelSpecial::None;
    this->PreferredZOverride = 0;
    this->RandomDirtPlugDensity = 0.00f;
    this->RandomDirtPlugType = EPlugType::DirtPlugTier1;
    this->RandomDirtPlugTier1StandardChance = 0.00f;
    this->RandomDirtPlugTier1WideChance = 0.00f;
    this->RandomDirtPlugTier1TallChance = 0.00f;
    this->RandomDirtPlugTier2StandardChance = 0.00f;
    this->RandomDirtPlugTier2WideChance = 0.00f;
    this->RandomDirtPlugTier2TallChance = 0.00f;
    this->OrePlugDensity = 0.00f;
    this->OrePlugMineral = NULL;
    this->OrePlugVeinRadius = 0.00f;
    this->HorizontalRadius = 0.00f;
    this->VerticalRadius = 0.00f;
}

