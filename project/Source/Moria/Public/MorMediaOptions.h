#pragma once
#include "CoreMinimal.h"
#include "MediaPlayerOptions.h"
#include "MorMediaOptions.generated.h"

class UMorMediaPlayerWidget;

USTRUCT(BlueprintType)
struct FMorMediaOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaPlayerOptions MediaPlayerOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorMediaPlayerWidget* MediaPlayerWidgetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMuteSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOffSkipTextTime;
    
    MORIA_API FMorMediaOptions();
};

