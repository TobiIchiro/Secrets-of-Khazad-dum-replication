#pragma once
#include "CoreMinimal.h"
#include "FGKMontageState.h"
#include "FGKOneShotMontageState.generated.h"

class UAnimMontage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKOneShotMontageState : public UFGKMontageState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OneShotMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
public:
    UFGKOneShotMontageState();

};

