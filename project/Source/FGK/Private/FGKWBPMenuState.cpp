#include "FGKWBPMenuState.h"

UFGKWBPMenuState::UFGKWBPMenuState() {
    this->MenuActionMappings.AddDefaulted(8);
    this->WidgetClass = NULL;
    this->Widget = NULL;
}

UFGKMenuWidget* UFGKWBPMenuState::GetWidget() {
    return NULL;
}


