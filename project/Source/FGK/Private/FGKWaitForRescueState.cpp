#include "FGKWaitForRescueState.h"

UFGKWaitForRescueState::UFGKWaitForRescueState() {
    this->CharacterState = NULL;
    this->InteractRadius = 200.00f;
    this->POIWidgetClass = NULL;
    this->POIMinDistance = 0.00f;
    this->POIMaxDistance = 3000.00f;
    this->Space = EWidgetSpace::World;
    this->bManuallyRedraw = false;
    this->bDrawAtDesiredSize = false;
    this->InteractableComponent = NULL;
    this->POIMarkerComponent = NULL;
}


