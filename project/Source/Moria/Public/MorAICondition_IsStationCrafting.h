#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_IsStationCrafting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_IsStationCrafting : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StationBlackboardKeyName;
    
public:
    UMorAICondition_IsStationCrafting();

};

