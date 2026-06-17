#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKGlobalManagerInterface.h"
#include "MorMediaOptions.h"
#include "OnMediaEndReachedDelegate.h"
#include "Templates/SubclassOf.h"
#include "MorMediaPlayerManager.generated.h"

class UDataTable;
class UMediaSource;
class UMorMediaPlayerHandler;
class UMorMediaPlayerWidget;
class UMorMediaSaveGame;

UCLASS(Blueprintable)
class MORIA_API UMorMediaPlayerManager : public UObject, public IFGKGlobalManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaEndReached OnMediaEndReachedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorMediaPlayerHandler> MediaPlayerHandlerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorMediaPlayerHandler* MediaPlayerHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorMediaSaveGame* MediaSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AllMediaDataTable;
    
public:
    UMorMediaPlayerManager();

    UFUNCTION(BlueprintCallable)
    void StopPlayingMedia();
    
    UFUNCTION(BlueprintCallable)
    bool PlayMediaByName(const FName& MediaName, UMorMediaPlayerWidget* MediaPlayerWidgetOverride, bool bForcePlay);
    
    UFUNCTION(BlueprintCallable)
    void PlayMedia(const UMediaSource* MediaSource, const FMorMediaOptions& MediaOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorMediaPlayerWidget* GetCurrentMediaPlayerWidget() const;
    

    // Fix for true pure virtual functions not being implemented
};

