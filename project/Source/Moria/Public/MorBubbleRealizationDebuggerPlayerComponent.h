#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MorBubbleRealizationDebuggerPlayerComponent.generated.h"

class UMorBubbleRealizationDebugger;

UCLASS(Blueprintable, ClassGroup=Custom, Within=MorPlayerController, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorBubbleRealizationDebuggerPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorBubbleRealizationDebugger* Debugger;
    
public:
    UMorBubbleRealizationDebuggerPlayerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetUserName(const FString& InUserName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReportBubbleHash(const FIntVector& BubbleCoords, const FString& BubbleHash, bool bHasErrors);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnWorldLayoutReady();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReportDifferentBubbleHash(const FIntVector& BubbleCoords);
    
};

