#pragma once
#include "CoreMinimal.h"
#include "MorPermitData.h"
#include "MorBase.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorPermitData> ConstructionPermits;
    
public:
    FMorBase();
};

