#pragma once
#include "CoreMinimal.h"
#include "AkSegmentInfo.h"
#include "EAkCallbackType.h"
#include "AudioCallbackInfo.generated.h"

USTRUCT(BlueprintType)
struct FAudioCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkSegmentInfo SegmentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAkCallbackType CallbackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Cue;
    
    MORIA_API FAudioCallbackInfo();
};

