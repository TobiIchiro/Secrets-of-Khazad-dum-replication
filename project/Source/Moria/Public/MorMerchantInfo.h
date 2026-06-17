#pragma once
#include "CoreMinimal.h"
#include "EMorMerchantStatus.h"
#include "MorMerchantInfo.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorMerchantInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName MerchantRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMorMerchantStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NextVisitTime;
    
    FMorMerchantInfo();
};

