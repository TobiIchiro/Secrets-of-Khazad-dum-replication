#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKAnimNotifyState.h"
#include "FGKAnimNotifyState_TimeScaleWindow.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyState_TimeScaleWindow : public UFGKAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval TimeBound;
    
    UFGKAnimNotifyState_TimeScaleWindow();

};

