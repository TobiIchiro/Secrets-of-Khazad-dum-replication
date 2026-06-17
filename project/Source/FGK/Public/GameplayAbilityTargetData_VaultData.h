#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "FGKVaultData.h"
#include "GameplayAbilityTargetData_VaultData.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FGameplayAbilityTargetData_VaultData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKVaultData VaultData;
    
    FGameplayAbilityTargetData_VaultData();
};

