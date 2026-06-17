#pragma once
#include "CoreMinimal.h"
#include "FGKAnimChooserCondition.h"
#include "FGKAnimChooser_Distance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAnimChooser_Distance : public UFGKAnimChooserCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UFGKAnimChooser_Distance();

};

