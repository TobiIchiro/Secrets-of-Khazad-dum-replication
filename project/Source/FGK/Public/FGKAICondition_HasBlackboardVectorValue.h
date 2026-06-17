#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKAICondition_HasBlackboardValueBase.h"
#include "FGKAICondition_HasBlackboardVectorValue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_HasBlackboardVectorValue : public UFGKAICondition_HasBlackboardValueBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VectorValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MatchTolerance;
    
public:
    UFGKAICondition_HasBlackboardVectorValue();

};

