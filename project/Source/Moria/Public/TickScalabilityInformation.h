#pragma once
#include "CoreMinimal.h"
#include "ETickScalabilityLevel.h"
#include "TickScalabilityInformation.generated.h"

USTRUCT(BlueprintType)
struct FTickScalabilityInformation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETickScalabilityLevel ScalabilityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    MORIA_API FTickScalabilityInformation();
};

