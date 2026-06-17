#pragma once
#include "CoreMinimal.h"
#include "InputModifier.h"
#include "FGKInputModifierAimInversion.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UFGKInputModifierAimInversion : public UInputModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInvertVerticalAxis: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInvertHorizontalAxis: 1;
    
public:
    UFGKInputModifierAimInversion();

};

