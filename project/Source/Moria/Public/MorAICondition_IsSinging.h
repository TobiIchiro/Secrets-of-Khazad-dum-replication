#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "EMSongType.h"
#include "MorAICondition_IsSinging.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_IsSinging : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowHumming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckOnBlackboardDwarf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMSongType SpecificSongType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
public:
    UMorAICondition_IsSinging();

};

