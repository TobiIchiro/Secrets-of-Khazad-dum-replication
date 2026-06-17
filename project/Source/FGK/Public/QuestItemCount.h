#pragma once
#include "CoreMinimal.h"
#include "QuestItemCount.generated.h"

USTRUCT(BlueprintType)
struct FQuestItemCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Thing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FGK_API FQuestItemCount();
};

