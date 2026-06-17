#include "RopeInteractable.h"
#include "Templates/SubclassOf.h"

ARopeInteractable::ARopeInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PitonOffsets.AddDefaulted(3);
    this->HorizontalLengths.AddDefaulted(4);
    this->MaxHorizontalNormalAngle = 30.00f;
    this->LengthSelectionThreshold = 1.00f;
}

ARopeInteractable* ARopeInteractable::TrySpawn(AActor* SpawnSource, const FHitResult& Hit, TSubclassOf<ARopeInteractable> SpawnClass, AActor* SpawnInstigator) {
    return NULL;
}


