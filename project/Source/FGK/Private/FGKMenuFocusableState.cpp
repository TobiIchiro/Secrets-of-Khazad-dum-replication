#include "FGKMenuFocusableState.h"

UFGKMenuFocusableState::UFGKMenuFocusableState() {
    this->MenuActionMappings.AddDefaulted(8);
}



bool UFGKMenuFocusableState::DoesHaveFocus() const {
    return false;
}


