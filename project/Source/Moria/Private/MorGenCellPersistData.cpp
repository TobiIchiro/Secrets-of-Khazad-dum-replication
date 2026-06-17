#include "MorGenCellPersistData.h"

FMorGenCellPersistData::FMorGenCellPersistData() {
    this->Faces[0] = ELayoutInterface::Closed;
    this->Faces[1] = ELayoutInterface::Closed;
    this->Faces[2] = ELayoutInterface::Closed;
    this->Faces[3] = ELayoutInterface::Closed;
    this->Faces[4] = ELayoutInterface::Closed;
    this->Faces[5] = ELayoutInterface::Closed;
    this->BubbleInterface[0] = EBubbleInterface::Closed;
    this->BubbleInterface[1] = EBubbleInterface::Closed;
    this->BubbleInterface[2] = EBubbleInterface::Closed;
    this->BubbleInterface[3] = EBubbleInterface::Closed;
    this->BubbleInterface[4] = EBubbleInterface::Closed;
    this->BubbleInterface[5] = EBubbleInterface::Closed;
    this->Contents = ECellContents::Uninitialized;
}

