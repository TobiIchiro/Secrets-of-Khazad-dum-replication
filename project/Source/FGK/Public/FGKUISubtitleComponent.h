#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogueNode.h"
#include "SimpleSubtitle.h"
#include "FGKUISubtitleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKUISubtitleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFGKUISubtitleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AddSimpleSubtitle(const FSimpleSubtitle& SimpleSubtitle, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddDialogueSubtitle(const FText& SpeakerName, const FDialogueNode& DialogueNode, const float Duration);
    
};

