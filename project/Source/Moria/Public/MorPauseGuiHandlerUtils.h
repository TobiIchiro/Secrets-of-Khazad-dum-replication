#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Blueprint/UserWidget.h"
#include "MorPauseGuiHandlerUtils.generated.h"

class UUMGSequencePlayer;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable)
class MORIA_API UMorPauseGuiHandlerUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorPauseGuiHandlerUtils();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UUMGSequencePlayer* PlayPausableAnimationTimeRange(UUserWidget* Widget, UWidgetAnimation* Animation, float StartAtTime, float EndAtTime, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed, bool bRestoreState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UUMGSequencePlayer* PlayPausableAnimation(UUserWidget* Widget, UWidgetAnimation* Animation, float StartAtTime, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed, bool bRestoreState);
    
};

