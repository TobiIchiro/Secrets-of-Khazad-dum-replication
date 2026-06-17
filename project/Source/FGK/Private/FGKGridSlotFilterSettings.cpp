#include "FGKGridSlotFilterSettings.h"

FFGKGridSlotFilterSettings::FFGKGridSlotFilterSettings() {
    this->bFilterSlots = false;
    this->bFilterWithNavProbe = false;
    this->bFilterVennDiagram = false;
    this->VennDiagramFilterAngle = 0.00f;
    this->VennDiagramFilterProximity = 0.00f;
}

