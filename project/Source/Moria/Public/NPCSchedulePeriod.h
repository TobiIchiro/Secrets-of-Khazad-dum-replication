#pragma once
#include "CoreMinimal.h"
#include "ENpcSchedule.h"
#include "NPCSchedulePeriod.generated.h"

USTRUCT(BlueprintType)
struct FNPCSchedulePeriod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcSchedule NpcSchedule;
    
    MORIA_API FNPCSchedulePeriod();
};

