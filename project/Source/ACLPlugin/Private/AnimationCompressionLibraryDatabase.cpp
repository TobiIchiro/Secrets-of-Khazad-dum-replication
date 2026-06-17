#include "AnimationCompressionLibraryDatabase.h"

UAnimationCompressionLibraryDatabase::UAnimationCompressionLibraryDatabase() {
    this->MaxStreamRequestSizeKB = 1024;
    this->DefaultVisualFidelity = ACLVisualFidelity::Lowest;
}

void UAnimationCompressionLibraryDatabase::SetVisualFidelity(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UAnimationCompressionLibraryDatabase* DatabaseAsset, ACLVisualFidelityChangeResult& Result, ACLVisualFidelity VisualFidelity) {
}

ACLVisualFidelity UAnimationCompressionLibraryDatabase::GetVisualFidelity(UAnimationCompressionLibraryDatabase* DatabaseAsset) {
    return ACLVisualFidelity::Highest;
}


