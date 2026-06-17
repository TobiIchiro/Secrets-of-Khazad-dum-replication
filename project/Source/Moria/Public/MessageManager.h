#pragma once
#include "CoreMinimal.h"
#include "MorDamageMessage.h"
#include "MorDamageMessageRecievedSignatureDelegate.h"
#include "MorPerfectBlockMessage.h"
#include "MorReplicatedManager.h"
#include "MorRestoreMessage.h"
#include "MorRestoreMessageRecievedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "MessageManager.generated.h"

class UMorFloatingWidgetComponent;

UCLASS(Blueprintable)
class MORIA_API AMessageManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDamageMessageRecievedSignature OnDamageMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorRestoreMessageRecievedSignature OnRestoreMessageReceived;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorFloatingWidgetComponent> FloatingWidgetComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorDamageMessage> QueuedMessages;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorFloatingWidgetComponent*> UnparentedFloatingWidgets;
    
public:
    AMessageManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void QueueDamageMessage(FMorDamageMessage Message);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastRestoreMessage(FMorRestoreMessage Message);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPerfectBlockMessage(FMorPerfectBlockMessage Message);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDamageMessage(const TArray<FMorDamageMessage>& Messages);
    
};

