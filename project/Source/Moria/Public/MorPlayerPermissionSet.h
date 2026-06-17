#pragma once
#include "CoreMinimal.h"
#include "EConstructionPermission.h"
#include "EStoragePermission.h"
#include "MorPlayerPermissionSet.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorPlayerPermissionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConstructionPermission ConstructionPermission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoragePermission StoragePermission;
    
    FMorPlayerPermissionSet();
};

