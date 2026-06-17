#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "AkExternalSourceInfo.h"
#include "Engine/LatentActionManager.h"
#include "SimpleAkSubtitle.h"
#include "FGKAkComponent.generated.h"

class UAkAudioEvent;
class UFGKUISubtitleComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKAkComponent : public UAkComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKUISubtitleComponent* SequentialSubtitleComponent;
    
public:
    UFGKAkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void PostSequentialAkSubtitlesAndWaitForEndAsync(const TArray<FSimpleAkSubtitle>& AkSubtitles, UFGKUISubtitleComponent* SubtitleComponent, int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo, bool bShowSubtitle);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void PostSequentialAkEventsAndWaitForEndAsync(const TArray<UAkAudioEvent*>& AkEvents, int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void PostNextAkSubtitleInSequence();
    
    UFUNCTION(BlueprintCallable)
    void PostNextAkEventInSequence();
    
};

