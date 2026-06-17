#include "WorldLayoutParameters.h"

FWorldLayoutParameters::FWorldLayoutParameters() {
    this->ZoneSet = EZoneSet::Moria;
    this->Seed = 0;
    this->CoreCellsX = 0;
    this->CoreCellsY = 0;
    this->CoreCellsZ = 0;
    this->FullCellsX = 0;
    this->FullCellsY = 0;
    this->FullCellsZ = 0;
    this->InterfaceRule = EBubbleInterfaceSelection::PreferLargest;
    this->bDoSandboxLayout = false;
    this->InterzoneOpeningRate = 0.00f;
    this->IntrazoneOpeningRate = 0.00f;
    this->LandmarkInterzoneConnectionRate = 0.00f;
}

