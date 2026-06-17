#pragma once
#include "CoreMinimal.h"
#include "FGKAnimChooserCondition.h"
#include "FGKAnimChooser_Angle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAnimChooser_Angle : public UFGKAnimChooserCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
    UFGKAnimChooser_Angle();

};

