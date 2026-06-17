#pragma once
#include "CoreMinimal.h"
#include "FGKDangerInvokerRequest.h"
#include "FGKDangerRegisterHandle.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKDangerRegisterHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKDangerInvokerRequest Request;
    
    FFGKDangerRegisterHandle();
};

