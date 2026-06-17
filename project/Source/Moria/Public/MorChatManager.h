#pragma once
#include "CoreMinimal.h"
#include "MorChatMessage.h"
#include "MorReplicatedManager.h"
#include "MorSendMessageSignatureDelegate.h"
#include "MorChatManager.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorChatManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSendMessageSignature SendMessage;
    
    AMorChatManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerChat(const FMorChatMessage& NewMessage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastChat(const FMorChatMessage& NewMessage);
    
};

