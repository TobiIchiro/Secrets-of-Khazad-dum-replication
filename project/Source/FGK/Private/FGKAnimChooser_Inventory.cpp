#include "FGKAnimChooser_Inventory.h"

UFGKAnimChooser_Inventory::UFGKAnimChooser_Inventory() {
    this->Item = NULL;
    this->ActorToEval = EAnimChooserActor::Receiver;
    this->MinQuantity = 1;
    this->MaxQuantity = -1;
    this->bInverse = false;
    this->bEquipped = false;
}


