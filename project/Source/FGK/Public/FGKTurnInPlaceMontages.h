#pragma once
#include "CoreMinimal.h"
#include "FGKTurnInPlaceMontages.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FGK_API FFGKTurnInPlaceMontages {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montages[6];
    
    FFGKTurnInPlaceMontages();
};

