#pragma once
#include "CoreMinimal.h"
#include "MorPersistentPlayerIdentifier.h"
#include "MorPlayerPermissionSet.h"
#include "MorPlayerPermissionStorageData.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorPlayerPermissionStorageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorPersistentPlayerIdentifier PersistentPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerIsBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultPermissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorPlayerPermissionSet Permissions;
    
    FMorPlayerPermissionStorageData();
};

