#include "MorMerchantOffer.h"

FMorMerchantOffer::FMorMerchantOffer() {
    this->OfferId = 0;
    this->Kind = EMerchantOfferKind::Item;
    this->OfferSize = 0;
    this->OfferRemaining = 0;
    this->OfferFulfilled = 0;
    this->AdjustedTradeValue = 0.00f;
}

