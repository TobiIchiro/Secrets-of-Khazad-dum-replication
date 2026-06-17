#pragma once
#include "CoreMinimal.h"
#include "MorMerchantOffer.h"
#include "MorMerchantOrder.h"
#include "MorMerchantRowHandle.h"
#include "MorMerchantStall.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorMerchantStall {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorMerchantRowHandle Tenant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 DepartureTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NextTenantTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorMerchantOrder> Orders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorMerchantOffer> Offers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bInteractedThisVisit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> UnlockedRecipes;
    
    FMorMerchantStall();
};

