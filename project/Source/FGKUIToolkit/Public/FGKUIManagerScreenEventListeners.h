#pragma once
#include "CoreMinimal.h"
#include "FGKUIManagerScreenEventDelegate.h"
#include "FGKUIManagerScreenEventListeners.generated.h"

USTRUCT(BlueprintType)
struct FGKUITOOLKIT_API FFGKUIManagerScreenEventListeners {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKUIManagerScreenEvent> Delegates;
    
    FFGKUIManagerScreenEventListeners();
};

