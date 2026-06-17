#include "MorBreakableMeshPiece.h"

UMorBreakableMeshPiece::UMorBreakableMeshPiece(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasDamagedMesh = false;
    this->bIsDamaged = false;
    this->bPreserveMesh = false;
    this->bCanBreakWhenInvisible = true;
    this->bSetMaterialDamage = true;
    this->DamagedMesh = NULL;
    this->CachedPristineMesh = NULL;
}


