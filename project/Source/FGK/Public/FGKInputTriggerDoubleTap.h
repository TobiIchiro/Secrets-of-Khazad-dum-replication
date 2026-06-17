#pragma once
#include "CoreMinimal.h"
#include "InputTrigger.h"
#include "FGKInputTriggerDoubleTap.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UFGKInputTriggerDoubleTap : public UInputTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGap;
    
    UFGKInputTriggerDoubleTap();

};

