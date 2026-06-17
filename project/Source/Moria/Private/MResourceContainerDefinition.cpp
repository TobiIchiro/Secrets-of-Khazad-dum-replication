#include "MResourceContainerDefinition.h"

FMResourceContainerDefinition::FMResourceContainerDefinition() {
    this->ContainerType = EMorResourceContainerType::Receptacle;
    this->bIsDefault = false;
    this->Difficulty = EMDifficulty::None;
    this->MaxTotalResources = 0;
    this->MaxUniqueResources = 0;
}

