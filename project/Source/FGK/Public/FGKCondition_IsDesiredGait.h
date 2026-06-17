#pragma once
#include "CoreMinimal.h"
#include "EFGKGait.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_IsDesiredGait.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_IsDesiredGait : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKGait Gait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCurrentGait: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bActualGait: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequestedGait: 1;
    
public:
    UFGKCondition_IsDesiredGait();

};

