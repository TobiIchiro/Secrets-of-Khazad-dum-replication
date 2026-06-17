#include "MorSaveGameData.h"

UMorSaveGameData::UMorSaveGameData() {
    this->AutoSaveTime = 300.00f;
    this->DefaultCloseTimeForPopUp = 2.00f;
    this->SaveGamePopUpWidgetClass = NULL;
    this->SaveGamePopUpZOrder = 0;
}


