#pragma once
#include "CoreMinimal.h"
#include "FGKMotionCorrectionState.h"
#include "FGKVaultData.h"
#include "FGKMontageState_Vault.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKMontageState_Vault : public UFGKMotionCorrectionState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKVaultData VaultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStarted;
    
public:
    UFGKMontageState_Vault();

};

