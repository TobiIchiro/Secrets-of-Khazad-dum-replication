#pragma once
#include "CoreMinimal.h"
#include "EFGKVaultType.h"
#include "FGKLocomotionAsset.h"
#include "FGKVaultAsset.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKVaultAsset : public FFGKLocomotionAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKVaultType VaultType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchStepDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandStepDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdealSpeed;
    
    FFGKVaultAsset();
};

