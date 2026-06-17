#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "UObject/NoExportTypes.h"
#include "FGKAIBehaviorPointComponent.h"
#include "GameplayTagContainer.h"
#include "EBubbleUpdateState.h"
#include "MorAIBehaviorPointComponent.generated.h"

class AMorCharacter;
class UAkAudioEvent;
class UAkCallbackInfo;
class UAnimMontage;
class UMorAIBehaviorPointComponent;
class UWorldLayoutBubble;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorAIBehaviorPointComponent : public UFGKAIBehaviorPointComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Preference;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Montages;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAsLinkedBehaviorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LinkTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorAIBehaviorPointComponent*> LinkedBehaviorPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayAmbientVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AVOLookupDialogueEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange AVOTriggerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AVORequiredOccupants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* SpeakerDwarf;
    
public:
    UMorAIBehaviorPointComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void PostAmbientVO(TSoftObjectPtr<UAkAudioEvent> Event);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBubbleUpdate(const UWorldLayoutBubble* Bubble, EBubbleUpdateState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAkEventEnd(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

