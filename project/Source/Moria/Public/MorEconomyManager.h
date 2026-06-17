#pragma once
#include "CoreMinimal.h"
#include "MorAnyItemRowHandle.h"
#include "MorCurrencyAmount.h"
#include "MorEconomyUpdateBalanceDelegate.h"
#include "MorEconomyUpdateBillDelegate.h"
#include "MorEconomyUpdateTradersDelegate.h"
#include "MorItemRecipeDefinition.h"
#include "MorMerchantInfo.h"
#include "MorMerchantStall.h"
#include "MorProgressRowHandle.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "MorEconomyManager.generated.h"

class UMorEconomyTuningData;

UCLASS(Blueprintable)
class MORIA_API AMorEconomyManager : public AMorReplicatedManager, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorEconomyTuningData* TuningData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle MerchantUnlockProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEconomyUpdateBalance OnUpdateBalance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEconomyUpdateBill OnUpdateOrder;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEconomyUpdateBill OnUpdateOffer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEconomyUpdateTraders OnUpdateTraders;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FMorAnyItemRowHandle, float> PriceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FMorAnyItemRowHandle, int32> FulfillmentHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MerchantStalls, meta=(AllowPrivateAccess=true))
    TArray<FMorMerchantStall> MerchantStalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MerchantInfos, meta=(AllowPrivateAccess=true))
    TArray<FMorMerchantInfo> MerchantInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_AccountBalance, meta=(AllowPrivateAccess=true))
    TArray<FMorCurrencyAmount> AccountBalances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorAnyItemRowHandle> OpenOrderItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentDay;
    
public:
    AMorEconomyManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void ServerUpdate(int32 Day);
    
    UFUNCTION(BlueprintCallable)
    void ProgressUpdate(const FMorProgressRowHandle& ProgressKey, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MerchantStalls();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MerchantInfos();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccountBalance(const TArray<FMorCurrencyAmount>& OldBalances);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOrderForRecipe(const FMorItemRecipeDefinition& RecipeDef) const;
    

    // Fix for true pure virtual functions not being implemented
};

