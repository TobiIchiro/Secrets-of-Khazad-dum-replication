#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FGKMovementStanceSettings.h"
#include "FGKMovementStateSettings.generated.h"

USTRUCT(BlueprintType)
struct FFGKMovementStateSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKMovementStanceSettings VelocityDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKMovementStanceSettings LookingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKMovementStanceSettings Aiming;
    
    FGK_API FFGKMovementStateSettings();
};

