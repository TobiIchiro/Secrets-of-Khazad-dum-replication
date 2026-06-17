#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotify.h"
#include "FGKAnimNotify_EarlyExit.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotify_EarlyExit : public UFGKAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EarlyExitTypes;
    
    UFGKAnimNotify_EarlyExit();

};

