#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuestItemCount.h"
#include "Templates/SubclassOf.h"
#include "FGKQuestDefinition.generated.h"

class UFGKQuestRequirement;

USTRUCT(BlueprintType)
struct FFGKQuestDefinition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestBlurb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Prerequisites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestItemCount> RequiredThings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKQuestRequirement> Requirement;
    
    FGK_API FFGKQuestDefinition();
};

