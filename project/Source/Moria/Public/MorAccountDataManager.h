#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorCosmeticStatusUpdateDelegate.h"
#include "MorEntitlementRecord.h"
#include "MorEntitlementStatus.h"
#include "MorAccountDataManager.generated.h"

class UMorAccountDataManager;

UCLASS(Blueprintable)
class MORIA_API UMorAccountDataManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorCosmeticStatusUpdate OnCosmeticStatusUpdate;
    
    UMorAccountDataManager();

    UFUNCTION(BlueprintCallable)
    void UpdateFromEntitlement(const FName& EntitlementID, const FMorEntitlementStatus& Status);
    
    UFUNCTION(BlueprintCallable)
    void StoreShownEntitlementId(const FName& EntitlementID, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    void StoreMainMenuPurchasedShownEntitlementId(const FName& EntitlementID, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMainMenuPurchasedShownEntitlementId(const FName& EntitlementID, const bool bSave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnshownEntitlementIds() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMorEntitlementRecord> GetUnshownEntitlementIds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMainMenuBuyEntitlementDisplayedCount(const FName& EntitlementID);
    
    UFUNCTION(BlueprintCallable)
    bool GetHasShownMainMenuPurchasedEntitlementId(const FName& EntitlementID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UMorAccountDataManager* Get(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    int32 AddMainMenuBuyEntitlement(const FName& EntitlementID, const bool bSave);
    
};

