#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotify.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DialogueRateLimit.h"
#include "EMorDialogueEventPriority.h"
#include "MoriaAnimNotify_VoiceLine.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class MORIA_API UMoriaAnimNotify_VoiceLine : public UFGKAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEventTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DialogueEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DialogueTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorDialogueEventPriority DialoguePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueRateLimit DialogueRateLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VoiceLineTargetTags;
    
    UMoriaAnimNotify_VoiceLine();

};

