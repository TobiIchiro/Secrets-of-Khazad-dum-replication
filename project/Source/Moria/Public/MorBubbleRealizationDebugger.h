#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorBubbleRealizationDebugger.generated.h"

class UMorBubbleRealizationDebuggerPlayerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=WorldLayout, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorBubbleRealizationDebugger : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorBubbleRealizationDebuggerPlayerComponent* LocalPlayer;
    
public:
    UMorBubbleRealizationDebugger(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnWorldLayoutReady();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnWarningPopupClosed(uint8 ButtonIndex);
    
};

