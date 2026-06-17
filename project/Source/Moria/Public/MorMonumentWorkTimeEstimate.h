#pragma once
#include "CoreMinimal.h"
#include "MorMonumentWorkTimeEstimate.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorMonumentWorkTimeEstimate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameMinutes;
    
public:
    FMorMonumentWorkTimeEstimate();
};

