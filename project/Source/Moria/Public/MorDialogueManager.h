#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DialogueRateLimit.h"
#include "EMorDialogueEventCooldownLength.h"
#include "EMorDialogueEventPriority.h"
#include "MorConversationSignatureDelegate.h"
#include "MorDialogueLineTimestamp.h"
#include "MorDialogueTimestampScoreBucket.h"
#include "MorReplicatedManager.h"
#include "MorVOPostedSignatureDelegate.h"
#include "MorDialogueManager.generated.h"

class AActor;
class AMorCharacter;
class UDataTable;
class UVoiceComponent;

UCLASS(Blueprintable)
class MORIA_API AMorDialogueManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConversationSignature OnConversationComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConversationSignature OnConversationCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorVOPostedSignature OnVoicePosted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstTimeVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstTimeVarPlayed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMaximumReplyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenAmbientBanter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToPlayerToTriggerBanter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToTriggerSubtitleAndLipsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMostSpecificVoiceLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorDialogueEventCooldownLength, float> CooldownLengths;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToSaveLineTimestamps;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeverSaidScore;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDialogueTimestampScoreBucket> TimestampScoreBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDialogueLineTimestamp> LineTimestamps;
    
public:
    AMorDialogueManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool RequestDialogueEventWithTagAndConversationTrack(FGameplayTag EventTag, AMorCharacter* Speaker, int32& ConversationID, FGameplayTagContainer TargetTags);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestDialogueEventWithTag(FGameplayTag EventTag, AMorCharacter* Speaker, FGameplayTagContainer TargetTags, bool bLocalOnly);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestDialogueEventFromTableAndConversationTrack(UDataTable* EventTable, AMorCharacter* Speaker, EMorDialogueEventPriority Priority, FDialogueRateLimit RateLimit, int32& ConversationID, FGameplayTagContainer TargetTags, bool bLocalOnly);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestDialogueEventFromTable(UDataTable* EventTable, AMorCharacter* Speaker, EMorDialogueEventPriority Priority, FDialogueRateLimit RateLimit, FGameplayTagContainer TargetTags, bool bLocalOnly);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVoiceLineEnded(UVoiceComponent* SpeakerVoiceComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentSpeakerDestroyed(AActor* DestroyedActor);
    
};

