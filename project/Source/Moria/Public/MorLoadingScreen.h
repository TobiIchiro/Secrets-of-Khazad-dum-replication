#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELoadingScreenState.h"
#include "MorLoadingScreenConfigData.h"
#include "MorLoadingScreen.generated.h"

class UAkRtpc;
class UGridPanel;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorLoadingScreen : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* LoadingPanel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* VolumeAkRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenedVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClosedVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VolumeOptionId;
    
public:
    UMorLoadingScreen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseVideo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoiningClient() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEarthquakePlanned() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseLoadingScreen(bool bInstant);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnScreenStateChanged(ELoadingScreenState NewState, const FMorLoadingScreenConfigData& ScreenConfig);
    
};

