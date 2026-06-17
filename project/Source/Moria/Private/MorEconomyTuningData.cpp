#include "MorEconomyTuningData.h"

UMorEconomyTuningData::UMorEconomyTuningData() {
    this->NumberOfStalls = 7;
    this->MerchantStallCooldown = 2;
    this->NumberOfOrders = 3;
    this->NumberOfOffers = 3;
    this->OfferPriceMultiplier = 1.50f;
    this->MaxPriceModifier = 3.00f;
    this->MinPriceModifier = 0.25f;
    this->FulfilledOrderCurve = NULL;
    this->FulfilledOrderRate = 0.95f;
    this->MissedOrderCurve = NULL;
    this->MissedOrderRate = 1.05f;
    this->MinBoomChance = 0.02f;
    this->MaxBoomChance = 0.10f;
    this->MinBustChance = 0.02f;
    this->MaxBustChance = 0.10f;
}


