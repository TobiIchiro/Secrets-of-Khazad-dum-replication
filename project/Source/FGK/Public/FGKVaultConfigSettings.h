#pragma once
#include "CoreMinimal.h"
#include "EFGKVaultType.h"
#include "FGKVaultConfigSettings.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKVaultConfigSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VaultMaxThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VaultMinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VaultMaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFGKVaultType> VaultTypes;
    
    FFGKVaultConfigSettings();
};

