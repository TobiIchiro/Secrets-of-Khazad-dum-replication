#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMorBlockedPlayersListState.h"
#include "EMorPlayerBlockMode.h"
#include "EMorSaveBlockedPlayerResult.h"
#include "MorBlockedPlayersListItem.h"
#include "MorPersistentPlayerIdentifier.h"
#include "MorPlayerPermissionSet.h"
#include "MorPlayerPermissionStorageData.h"
#include "MorBlockedPlayersList.generated.h"

UCLASS(Abstract, Blueprintable)
class MORIA_API UMorBlockedPlayersList : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateChangedDynamic, EMorBlockedPlayersListState, NewState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnListChangedDynamic);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChangedDynamic OnStateChangedDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListChangedDynamic OnListChangedBp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMorBlockedPlayersListState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bLastSaveSucceeded: 1;
    
public:
    UMorBlockedPlayersList();

    UFUNCTION(BlueprintCallable)
    EMorSaveBlockedPlayerResult SetPlayerPermission(const FMorBlockedPlayersListItem& Item, bool bOverridePermission, const FMorPlayerPermissionSet& Permission);
    
    UFUNCTION(BlueprintCallable)
    EMorSaveBlockedPlayerResult SetPlayerBlocked(const FMorBlockedPlayersListItem& Item, bool bBlocked);
    
    UFUNCTION(BlueprintCallable)
    EMorSaveBlockedPlayerResult SetDefaultPermissions(const FMorPlayerPermissionSet& Permissions);
    
    UFUNCTION(BlueprintCallable)
    void Prepare();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrepared() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInactive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorPlayerPermissionStorageData GetPlayerDataFromItem(const FMorBlockedPlayersListItem& Item, bool& bOutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorPlayerPermissionStorageData GetPlayerData(int32 ItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorPlayerBlockMode GetPlayerBlockMode(const FMorPersistentPlayerIdentifier& PlayerIdentifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorBlockedPlayersListItem GetPlayer(int32 ItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCapacity() const;
    
};

