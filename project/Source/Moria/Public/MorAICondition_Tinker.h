#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "ENpcRecycleResult.h"
#include "ETinkerConditionType.h"
#include "MorAICondition_Tinker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_Tinker : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETinkerConditionType TinkerConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Result_BlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcRecycleResult ExpectedResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JunkPile_BlackboardKeyName;
    
public:
    UMorAICondition_Tinker();

};

