#include "MorIsoMapBlueprintLibrary.h"

UMorIsoMapBlueprintLibrary::UMorIsoMapBlueprintLibrary() {
}

FMorIsoMapMarkerId UMorIsoMapBlueprintLibrary::MakeWaypointMarkerId(int32 WaypointId) {
    return FMorIsoMapMarkerId{};
}

bool UMorIsoMapBlueprintLibrary::IsWaypointMarkerId(const FMorIsoMapMarkerId& MarkerId) {
    return false;
}

bool UMorIsoMapBlueprintLibrary::IsMarkerIdValid(const FMorIsoMapMarkerId& MarkerId) {
    return false;
}

bool UMorIsoMapBlueprintLibrary::GetWaypointIdFromMarkerId(const FMorIsoMapMarkerId& MarkerId, int32& OutWaypointId) {
    return false;
}


