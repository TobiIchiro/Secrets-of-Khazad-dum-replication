#include "MorEconomyUtils.h"

UMorEconomyUtils::UMorEconomyUtils() {
}

bool UMorEconomyUtils::TrySellOrder(const FMorMerchantOrder& Order, const UObject* WorldContextObject) {
    return false;
}

bool UMorEconomyUtils::TryBuyOffer(const FMorMerchantOffer& Offer, const UObject* WorldContextObject) {
    return false;
}

bool UMorEconomyUtils::IsStallOccupied(const FMorMerchantStall& Stall) {
    return false;
}

FMorMerchantStall UMorEconomyUtils::GetStallForMerchant(FMorMerchantRowHandle Merchant, bool& bOutIsValid, const UObject* WorldContextObject) {
    return FMorMerchantStall{};
}

int32 UMorEconomyUtils::GetOrderHaveAmount(const FMorMerchantOrder& Order, const UObject* WorldContextObject) {
    return 0;
}

FMorMerchantOrder UMorEconomyUtils::GetOrderForMerchant(FMorMerchantRowHandle Merchant, int32 OrderId, bool& bOutIsValid, const UObject* WorldContextObject) {
    return FMorMerchantOrder{};
}

FMorMerchantOffer UMorEconomyUtils::GetOfferForMerchant(FMorMerchantRowHandle Merchant, int32 OfferId, bool& bOutIsValid, const UObject* WorldContextObject) {
    return FMorMerchantOffer{};
}

int32 UMorEconomyUtils::GetMinutesTilDeparture(const FMorMerchantStall& Stall, const UObject* WorldContextObject) {
    return 0;
}

FMorMerchantRowHandle UMorEconomyUtils::GetMerchantRowHandleForStall(const FMorMerchantStall& Stall) {
    return FMorMerchantRowHandle{};
}

FMorMerchantDefinition UMorEconomyUtils::GetMerchantDefinition(const FMorMerchantRowHandle& MerchantRowHandle) {
    return FMorMerchantDefinition{};
}

AMorEconomyManager* UMorEconomyUtils::GetEconomyManager(const UObject* WorldContextObject) {
    return NULL;
}

FMorCurrencyDefinition UMorEconomyUtils::GetCurrencyDefinition(const FMorCurrencyRowHandle& CurrencyRowHandle) {
    return FMorCurrencyDefinition{};
}

TArray<FMorCurrencyRowHandle> UMorEconomyUtils::GetAllCurrencies(const UObject* WorldContextObject) {
    return TArray<FMorCurrencyRowHandle>();
}

TArray<FMorCurrencyAmount> UMorEconomyUtils::GetAccountBalances(const UObject* WorldContextObject) {
    return TArray<FMorCurrencyAmount>();
}

int32 UMorEconomyUtils::GetAccountBalance(FMorCurrencyRowHandle Currency, const UObject* WorldContextObject) {
    return 0;
}

bool UMorEconomyUtils::CanSellOrder(const FMorMerchantOrder& Order, const UObject* WorldContextObject) {
    return false;
}

bool UMorEconomyUtils::CanBuyOffer(const FMorMerchantOffer& Offer, const UObject* WorldContextObject) {
    return false;
}


