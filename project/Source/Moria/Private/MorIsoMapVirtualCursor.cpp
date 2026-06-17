#include "MorIsoMapVirtualCursor.h"

UMorIsoMapVirtualCursor::UMorIsoMapVirtualCursor() {
    this->FrameCountDelayToFollowFocusedMarker = 5;
    this->bEnableFollowingFocusedMarker = true;
    this->bFollowOnlyUserFocusedMarker = true;
    this->MapView = NULL;
    this->CommonInputSubsystem = NULL;
    this->RootCursor = NULL;
}

void UMorIsoMapVirtualCursor::TriggerOnClickEvent(const FKey& ClickKey) {
}

void UMorIsoMapVirtualCursor::SetVirtualCursorEnabled(bool bEnabled) {
}

void UMorIsoMapVirtualCursor::SetMousePositionFromCursor() {
}

void UMorIsoMapVirtualCursor::SetMapView(UMorIsoMapViewWidget* InMapView) {
}

void UMorIsoMapVirtualCursor::SetCursorFromMousePosition() {
}

void UMorIsoMapVirtualCursor::SetCursorFromMapPivot() {
}


void UMorIsoMapVirtualCursor::MoveCursor(const FVector2D& Delta, EMorIsoMapViewValueChange PanChange) {
}


