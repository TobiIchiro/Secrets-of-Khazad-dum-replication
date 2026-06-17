#pragma once
#include "CoreMinimal.h"
#include "SitSpotMontages.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSitSpotMontages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Enter_Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Loop_Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Exit_Montage;
    
    MORIA_API FSitSpotMontages();
};

