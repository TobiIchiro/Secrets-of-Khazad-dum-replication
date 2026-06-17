#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ComboIdealReachedSignatureDelegate.h"
#include "FGKMontageState.h"
#include "FGKComboState.generated.h"

class UFGKTargetableComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKComboState : public UFGKMontageState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboIdealReachedSignature OnComboIdealReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AdditionalComboAttackOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdditionalComboTagOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> RuntimeComboAttackOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKTargetableComponent* AttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExitOnTagRelease: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTagReleaseNeedsEarlyExit: 1;
    
public:
    UFGKComboState();

};

