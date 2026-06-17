#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMorEntitlementPurchaseResult.h"
#include "MorAnyItemRowHandle.h"
#include "MorConstructionRowHandle.h"
#include "MorEntitlementDefinition.h"
#include "MorEntitlementList.h"
#include "MorEntitlementOptionalActivatedFirstTimeDelegate.h"
#include "MorEntitlementPurchaseDelegateDelegate.h"
#include "MorEntitlementRecord.h"
#include "MorEntitlementRowHandle.h"
#include "MorEntitlementStatus.h"
#include "MorEntitlementStatusUpdateDelegate.h"
#include "MorLoreRowHandle.h"
#include "MorRuneRowHandle.h"
#include "MorWorldLayoutConfigOptionalEntitlements.h"
#include "MorEntitlementManager.generated.h"

class UMorEntitlementManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorEntitlementManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEntitlementPurchaseDelegate OnPurchaseOperationComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEntitlementStatusUpdate OnEntitlementStatusUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEntitlementOptionalActivatedFirstTime OnOptionalEntitlementActivatedFirstTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMorEntitlementStatus> EntitlementStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorAnyItemRowHandle, FMorEntitlementList> ItemPrerequisite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorConstructionRowHandle, FMorEntitlementList> ConstructionPrerequisite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorRuneRowHandle, FMorEntitlementList> RunePrerequisite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorLoreRowHandle, FMorEntitlementList> LorePrerequisite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEntitlementRowHandle EntHandleDurinsFolk;
    
public:
    UMorEntitlementManager();

    UFUNCTION(BlueprintCallable)
    EMorEntitlementPurchaseResult PurchaseEntitlementAsync(const FName& EntitlementID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitlementDurinsFolkUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitlementDurinsFolkOwnedAndEnabledForWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitlementDurinsFolkOwned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorEntitlementRecord> GetUsableOptionalEntitlementRecordsMissingOrDisabledInConfig(const FMorWorldLayoutConfigOptionalEntitlements& ConfigEntitlements);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMorEntitlementRecord> GetOwnedEntitlementRecords();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorEntitlementRecord> GetNotUsableOptionalEntitlementRecordsEnabledInConfig(const FMorWorldLayoutConfigOptionalEntitlements& ConfigEntitlements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOptionalEntitlementOwnedAndEnabledForWorldHandle(const FMorEntitlementRowHandle& EntitlementID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOptionalEntitlementOwnedAndEnabledForWorld(const FName& EntitlementID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEntitlementUsableRowHandle(const FMorEntitlementRowHandle& EntitlementID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEntitlementUsable(const FName& EntitlementID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEntitlementOwnedRowHandle(const FMorEntitlementRowHandle& EntitlementID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEntitlementOwned(const FName& EntitlementID) const;
    
    UFUNCTION(BlueprintCallable)
    FMorEntitlementStatus GetEntitlementStatus(const FName& EntitlementID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, FMorEntitlementDefinition> GetEntitlementsMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorEntitlementRecord> GetEntitlements() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UMorEntitlementManager* Get(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void EnableEntitlement(const FName& EntitlementID);
    
    UFUNCTION(BlueprintCallable)
    void DisableEntitlement(const FName& EntitlementID);
    
};

