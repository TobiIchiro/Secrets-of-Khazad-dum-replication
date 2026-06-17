#pragma once
#include "CoreMinimal.h"
#include "ELicensingMode.generated.h"

UENUM(BlueprintType)
enum class ELicensingMode : uint8 {
    AcquireLicense,
    QueryReceipts,
};

