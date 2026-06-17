#include "MorEntitlementDefinition.h"

FMorEntitlementDefinition::FMorEntitlementDefinition() {
    this->bOptionalEntitlement = false;
    this->BadgeIcon = NULL;
    this->PrimaryIcon = NULL;
    this->KeyArt = NULL;
    this->SequenceNumber = 0;
    this->SteamDlcId = 0;
    this->bUnlockAllRecipes = false;
    this->bUnlockLore = false;
    this->bTestOwned = false;
    this->bTestPurchaseSucceeds = false;
}

