#include "ContentProxy.h"

AContentProxy::AContentProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDeleteInStandalone = false;
    this->bAlwaysDelete = false;
    this->RotationMode = EProxyRotationMode::None;
    this->YawLimit = 180.00f;
    this->PitchLimit = 0.00f;
    this->RollLimit = 0.00f;
}

FWorldLayoutCell AContentProxy::GetRootCell() const {
    return FWorldLayoutCell{};
}

FWorldLayoutCell AContentProxy::GetPhysicalCell() const {
    return FWorldLayoutCell{};
}

FString AContentProxy::GetInterfaceInfo() const {
    return TEXT("");
}

FString AContentProxy::GetCellInfo() const {
    return TEXT("");
}

void AContentProxy::Customize_Implementation() {
}


