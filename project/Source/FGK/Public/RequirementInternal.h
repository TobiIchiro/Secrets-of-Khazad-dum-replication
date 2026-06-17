#pragma once
#include "CoreMinimal.h"
#include "RequirementInternal.generated.h"

class UFGKQuest;
class UFGKQuestRequirement;

USTRUCT(BlueprintType)
struct FRequirementInternal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKQuestRequirement* Requirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFGKQuest*> Quests;
    
    FGK_API FRequirementInternal();
};

