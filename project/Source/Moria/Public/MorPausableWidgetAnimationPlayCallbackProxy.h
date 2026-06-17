#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Blueprint/UserWidget.h"
#include "MorPausableWidgetAnimationPlayCallbackProxy.generated.h"

class UMorPausableWidgetAnimationPlayCallbackProxy;
class UUMGSequencePlayer;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, MinimalAPI)
class UMorPausableWidgetAnimationPlayCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFinishedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishedDelegate Finished;
    
    UMorPausableWidgetAnimationPlayCallbackProxy();

    UFUNCTION(BlueprintCallable)
    static UMorPausableWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer*& OutResult, UUserWidget* Widget, UWidgetAnimation* Animation, float StartAtTime, float EndAtTime, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    static UMorPausableWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(UUMGSequencePlayer*& OutResult, UUserWidget* Widget, UWidgetAnimation* Animation, float StartAtTime, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
};

