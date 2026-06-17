#pragma once
#include "CoreMinimal.h"
#include "FGKMontageState.h"
#include "FGKMontageState_PlayRandomMontage.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKMontageState_PlayRandomMontage : public UFGKMontageState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontagesToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bStarted: 1;
    
public:
    UFGKMontageState_PlayRandomMontage();

};

