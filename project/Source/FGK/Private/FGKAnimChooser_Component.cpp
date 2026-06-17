#include "FGKAnimChooser_Component.h"

UFGKAnimChooser_Component::UFGKAnimChooser_Component() {
    this->Component = NULL;
    this->ActorToEval = EAnimChooserActor::Receiver;
    this->bExactMatch = false;
}


