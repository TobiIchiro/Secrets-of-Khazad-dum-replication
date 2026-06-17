#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BMAssetData.h"
#include "MorBackgroundMusicAsset.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class MORIA_API UMorBackgroundMusicAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBMAssetData Event;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Priority;
    
public:
    UMorBackgroundMusicAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkAudioEvent* GetMusicEvent();
    
};

