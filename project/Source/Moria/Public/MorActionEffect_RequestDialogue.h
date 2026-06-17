#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "DialogueRateLimit.h"
#include "EMorDialogueEventPriority.h"
#include "MorActionEffect_RequestDialogue.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_RequestDialogue : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DialogueTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSendTargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorDialogueEventPriority DialoguePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueRateLimit DialogueRateLimit;
    
public:
    UMorActionEffect_RequestDialogue();

protected:
    UFUNCTION(BlueprintCallable)
    void RequestDialogueEvent(AActor* Actor);
    
};

