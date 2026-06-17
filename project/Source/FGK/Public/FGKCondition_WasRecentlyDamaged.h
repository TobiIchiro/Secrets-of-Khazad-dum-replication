#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_WasRecentlyDamaged.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_WasRecentlyDamaged : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Seconds;
    
public:
    UFGKCondition_WasRecentlyDamaged();

};

