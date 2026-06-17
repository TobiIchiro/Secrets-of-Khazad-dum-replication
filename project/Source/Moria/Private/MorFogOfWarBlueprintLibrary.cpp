#include "MorFogOfWarBlueprintLibrary.h"

UMorFogOfWarBlueprintLibrary::UMorFogOfWarBlueprintLibrary() {
}

bool UMorFogOfWarBlueprintLibrary::IsValid(const FMorFogOfWarRef& Target) {
    return false;
}

int32 UMorFogOfWarBlueprintLibrary::GetPreviousDiscoveredChapterId(const FMorFogOfWarRef& Target, int32 ChapterId, bool& bOutIsValid) {
    return 0;
}

int32 UMorFogOfWarBlueprintLibrary::GetNumDiscoveredChapters(const FMorFogOfWarRef& Target) {
    return 0;
}

int32 UMorFogOfWarBlueprintLibrary::GetNextDiscoveredChapterId(const FMorFogOfWarRef& Target, int32 ChapterId, bool& bOutIsValid) {
    return 0;
}

int32 UMorFogOfWarBlueprintLibrary::GetNeighborDiscoveredChapterId(const FMorFogOfWarRef& Target, int32 ChapterId, int32 Direction, bool& bOutIsValid) {
    return 0;
}

int32 UMorFogOfWarBlueprintLibrary::GetFirstDiscoveredChapterId(const FMorFogOfWarRef& Target, bool& bOutIsValid) {
    return 0;
}

TSet<FMorZoneRowHandle> UMorFogOfWarBlueprintLibrary::GetDiscoveredZones(const FMorFogOfWarRef& Target) {
    return TSet<FMorZoneRowHandle>();
}

TArray<int32> UMorFogOfWarBlueprintLibrary::GetDiscoveredChapters(const FMorFogOfWarRef& Target) {
    return TArray<int32>();
}

TSet<FIntVector> UMorFogOfWarBlueprintLibrary::GetDiscoveredBubbles(const FMorFogOfWarRef& Target) {
    return TSet<FIntVector>();
}

FText UMorFogOfWarBlueprintLibrary::GetChapterName(const FMorFogOfWarRef& Target, int32 ChapterId, bool& bOutIsValid) {
    return FText::GetEmpty();
}


