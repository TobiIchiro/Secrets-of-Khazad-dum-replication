#pragma once
#include "CoreMinimal.h"
#include "MorLoadingScreen.h"
#include "MorGameStartIntroScreen.generated.h"

class AMorPlayerController;
class UCanvasPanel;
class UMorMediaPlayerWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorGameStartIntroScreen : public UMorLoadingScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorMediaPlayerWidget* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LoadingBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* EarthquakeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MainContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* JoiningPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitForWorldReadyToPlayTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayVideoDelayFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShowVideoDelayFrames;
    
public:
    UMorGameStartIntroScreen();

private:
    UFUNCTION(BlueprintCallable)
    void OnVideoEnded();
    
};

