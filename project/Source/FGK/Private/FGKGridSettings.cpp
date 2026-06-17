#include "FGKGridSettings.h"

FFGKGridSettings::FFGKGridSettings() {
    this->Radius = 0.00f;
    this->NumSlots = 0;
    this->GridCapacity = 0;
    this->SecondaryCapacity = 0;
    this->SlotAssignmentCooldown = 0.00f;
    this->SlotReleaseCooldown = 0.00f;
    this->AssignmentUpdateInterval = 0.00f;
    this->SlotRotationType = EFGKCombatSlotRotationType::NoRotation;
}

