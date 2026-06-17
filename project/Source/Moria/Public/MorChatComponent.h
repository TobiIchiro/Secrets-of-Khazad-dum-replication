#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorChatMessage.h"
#include "MorChatComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorChatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMorChatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChat(const FMorChatMessage& Message);
    
};

