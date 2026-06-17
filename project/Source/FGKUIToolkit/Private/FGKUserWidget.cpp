#include "FGKUserWidget.h"

UFGKUserWidget::UFGKUserWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void UFGKUserWidget::StopListeningForAxis(FName AxisName) {
}

void UFGKUserWidget::ListenForInputActionExtendedCustomController(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, bool bExecuteWhenPaused, FOnInputAction Callback, APlayerController* PlayerController) {
}

void UFGKUserWidget::ListenForInputActionExtended(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, bool bExecuteWhenPaused, FOnInputAction Callback) {
}

void UFGKUserWidget::ListenForAxis(FName AxisName, float DeadZone, bool bConsume, bool bExecuteWhenPaused, UFGKUserWidget::FOnAxisAction Callback) {
}


