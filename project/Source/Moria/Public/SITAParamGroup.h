#pragma once
#include "CoreMinimal.h"
#include "SITAParams.h"
#include "SITAParamGroup.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FSITAParamGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSITAParams Params;
    
    FSITAParamGroup();
};

