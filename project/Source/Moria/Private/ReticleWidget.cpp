#include "ReticleWidget.h"

UReticleWidget::UReticleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ReticleImage = NULL;
    this->TargetIdText = NULL;
    this->RequiredToolText = NULL;
}

void UReticleWidget::SetReticle_Implementation(EReticleType ReticleType) {
}


