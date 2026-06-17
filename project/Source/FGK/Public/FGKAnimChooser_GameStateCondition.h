#pragma once
#include "CoreMinimal.h"
#include "ExpressionStruct.h"
#include "FGKAnimChooserCondition.h"
#include "FGKAnimChooser_GameStateCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAnimChooser_GameStateCondition : public UFGKAnimChooserCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionStruct Rule;
    
    UFGKAnimChooser_GameStateCondition();

};

