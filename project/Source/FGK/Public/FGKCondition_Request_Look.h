#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_Request_Look.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_Request_Look : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLook;
    
public:
    UFGKCondition_Request_Look();

};

