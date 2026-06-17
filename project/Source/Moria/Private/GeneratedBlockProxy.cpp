#include "GeneratedBlockProxy.h"

FGeneratedBlockProxy::FGeneratedBlockProxy() {
    this->Level = 0;
    this->Extents = 0.00f;
    this->OriginalExtents = 0.00f;
    this->ParentProxyIndex = 0;
    this->State = EMorGeneratedBlockProxyState::Eliminated;
    this->BlockType = EBlockProxyType::Floor;
    this->bIsLedge = false;
    this->bIsLeaf = false;
}

