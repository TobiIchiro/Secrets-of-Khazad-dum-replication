#pragma once
#include "CoreMinimal.h"
#include "MorSettlementHandle.h"
#include "MorSettlementNotificationInfo.generated.h"

class AMorSettlementStone;

USTRUCT(BlueprintType)
struct MORIA_API FMorSettlementNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementHandle SettlmenetHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorSettlementStone* SettlementStone;
    
    FMorSettlementNotificationInfo();
};

