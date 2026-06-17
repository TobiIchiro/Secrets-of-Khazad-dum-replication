#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MorNPCConversationRowHandle.h"
#include "MorNPCConversationTextRowHandle.h"
#include "MorNPCOnConversationEndedDelegate.h"
#include "MorNPCOnConversationSpeechBubbleVisibilityChangedDelegate.h"
#include "MorNPCOnConversationStartedDelegate.h"
#include "MorNPCConversationComponent.generated.h"

class UMorNpcTuningData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorNPCConversationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid SpeakerId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCOnConversationStarted OnConversationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCOnConversationEnded OnConversationEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCOnConversationSpeechBubbleVisibilityChanged OnConversationSpeechBubbleVisibilityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorNpcTuningData* NpcTuningData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorNPCConversationRowHandle CurrentConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorNPCConversationTextRowHandle CurrentConversationText;
    
public:
    UMorNPCConversationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSpeechBubbleVisibility(bool bIsVisble);
    
    UFUNCTION(BlueprintCallable)
    bool SetNextUnlockedConversation(FMorNPCConversationRowHandle& OutConversation, FMorNPCConversationTextRowHandle& OutText);
    
    UFUNCTION(BlueprintCallable)
    void SetConversationCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasConversation() const;
    
};

