#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorInteractableConditionBase.h"
#include "MorInteractableCondition_LastInteractorAngle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableCondition_LastInteractorAngle : public UMorInteractableConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReferenceDirection;
    
public:
    UMorInteractableCondition_LastInteractorAngle();

};

