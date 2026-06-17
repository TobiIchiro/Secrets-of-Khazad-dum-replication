#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "GameplayTagContainer.h"
#include "EMorDialogueEventCooldownLength.h"
#include "EMorDialogueEventPriority.h"
#include "MorDialogueEventTypeDefinition.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct MORIA_API FMorDialogueEventTypeDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DialogueEventTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AssociatedConversations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorDialogueEventPriority EventPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorDialogueEventCooldownLength EventCooldownLength;
    
    FMorDialogueEventTypeDefinition();
};

