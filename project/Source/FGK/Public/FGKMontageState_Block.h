#pragma once
#include "CoreMinimal.h"
#include "FGKOneShotMontageState.h"
#include "FGKMontageState_Block.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKMontageState_Block : public UFGKOneShotMontageState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSnapRotationToIncomingDanger: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Targeter;
    
public:
    UFGKMontageState_Block();

};

