#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorCurrencyAmount.h"
#include "MorCurrencyDefinition.h"
#include "MorCurrencyRowHandle.h"
#include "MorMerchantDefinition.h"
#include "MorMerchantOffer.h"
#include "MorMerchantOrder.h"
#include "MorMerchantRowHandle.h"
#include "MorMerchantStall.h"
#include "MorEconomyUtils.generated.h"

class AMorEconomyManager;
class UObject;

UCLASS(Blueprintable)
class MORIA_API UMorEconomyUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorEconomyUtils();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool TrySellOrder(const FMorMerchantOrder& Order, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool TryBuyOffer(const FMorMerchantOffer& Offer, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStallOccupied(const FMorMerchantStall& Stall);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FMorMerchantStall GetStallForMerchant(FMorMerchantRowHandle Merchant, bool& bOutIsValid, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetOrderHaveAmount(const FMorMerchantOrder& Order, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FMorMerchantOrder GetOrderForMerchant(FMorMerchantRowHandle Merchant, int32 OrderId, bool& bOutIsValid, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FMorMerchantOffer GetOfferForMerchant(FMorMerchantRowHandle Merchant, int32 OfferId, bool& bOutIsValid, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetMinutesTilDeparture(const FMorMerchantStall& Stall, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FMorMerchantRowHandle GetMerchantRowHandleForStall(const FMorMerchantStall& Stall);
    
    UFUNCTION(BlueprintCallable)
    static FMorMerchantDefinition GetMerchantDefinition(const FMorMerchantRowHandle& MerchantRowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AMorEconomyManager* GetEconomyManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FMorCurrencyDefinition GetCurrencyDefinition(const FMorCurrencyRowHandle& CurrencyRowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FMorCurrencyRowHandle> GetAllCurrencies(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<FMorCurrencyAmount> GetAccountBalances(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetAccountBalance(FMorCurrencyRowHandle Currency, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CanSellOrder(const FMorMerchantOrder& Order, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CanBuyOffer(const FMorMerchantOffer& Offer, const UObject* WorldContextObject);
    
};

