#pragma once
#include "CoreMinimal.h"
#include "EFGKOverlayState.h"
#include "FGKOverlayStateButtonParams.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FGK_API FFGKOverlayStateButtonParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKOverlayState State;
    
    FFGKOverlayStateButtonParams();
};

