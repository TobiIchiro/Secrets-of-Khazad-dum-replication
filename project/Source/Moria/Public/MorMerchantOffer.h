#pragma once
#include "CoreMinimal.h"
#include "EMerchantOfferKind.h"
#include "MorAnyItemRowHandle.h"
#include "MorCurrencyAmount.h"
#include "MorRecipeBundleRowHandle.h"
#include "MorMerchantOffer.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorMerchantOffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 OfferId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMerchantOfferKind Kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorAnyItemRowHandle ItemHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorRecipeBundleRowHandle RecipeBundle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 OfferSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 OfferRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 OfferFulfilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float AdjustedTradeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorCurrencyAmount ConvertedValue;
    
    FMorMerchantOffer();
};

