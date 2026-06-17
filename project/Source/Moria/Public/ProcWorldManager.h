#pragma once
#include "CoreMinimal.h"
#include "MorReplicatedManager.h"
#include "Templates/SubclassOf.h"
#include "ProcWorldManager.generated.h"

class AWorldPlaybackElement;

UCLASS(Blueprintable)
class MORIA_API AProcWorldManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackInitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackStepDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackModelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWorldPlaybackElement> PassageElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWorldPlaybackElement> BubbleElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWorldPlaybackElement> LandmarkElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWorldPlaybackElement> RouteElement;
    
public:
    AProcWorldManager(const FObjectInitializer& ObjectInitializer);

};

