#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "EMorGameModeFlags.h"
#include "MorTutorialRowHandle.h"
#include "TutorialListItem.h"
#include "MorTutorialDefinition.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct MORIA_API FMorTutorialDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialListItem> TutorialListItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorTutorialRowHandle TutorialToTriggerUponCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DialogueOfTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorGameModeFlags AcceptableGameModes;
    
    FMorTutorialDefinition();
};

