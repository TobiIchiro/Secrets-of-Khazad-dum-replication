#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "FGKCondition_IsLevelStreamingComplete.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_IsLevelStreamingComplete : public UFGKCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckAssetStreaming;
    
public:
    UFGKCondition_IsLevelStreamingComplete();

};

