#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_InMovementMode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_InMovementMode : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CustomMode;
    
public:
    UFGKCondition_InMovementMode();

};

