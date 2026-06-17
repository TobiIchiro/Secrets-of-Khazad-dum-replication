#include "MorTreasurePileBase.h"
#include "MorTreasureComponent.h"

AMorTreasurePileBase::AMorTreasurePileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseFirstObjectAsInteractableName = false;
    this->TreasureComponent = CreateDefaultSubobject<UMorTreasureComponent>(TEXT("TreasureComponent"));
    this->TimeAfterBuffExpiresTillNextAdmireAvailable = 15;
    this->RecentlyAdmiredBuff = NULL;
}


