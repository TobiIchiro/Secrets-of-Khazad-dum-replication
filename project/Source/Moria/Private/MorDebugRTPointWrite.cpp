#include "MorDebugRTPointWrite.h"

AMorDebugRTPointWrite::AMorDebugRTPointWrite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RenderTarget = NULL;
    this->Radius = 200.00f;
}

void AMorDebugRTPointWrite::UpdatePoints() {
}

void AMorDebugRTPointWrite::HidePoints() {
}


