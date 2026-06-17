#pragma once
#include "CoreMinimal.h"
#include "EMorPlayerReportCategory.h"
#include "MorNetUserId.h"
#include "MorPlayerReport.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorPlayerReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNetUserId UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorPlayerReportCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    FMorPlayerReport();
};

