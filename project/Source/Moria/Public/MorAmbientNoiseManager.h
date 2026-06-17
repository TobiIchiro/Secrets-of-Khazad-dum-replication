#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorReplicatedManager.h"
#include "MorAmbientNoiseManager.generated.h"

class UAkRtpc;

UCLASS(Blueprintable)
class MORIA_API AMorAmbientNoiseManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* AmbientNoiseRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueToDecreaseBy;
    
    AMorAmbientNoiseManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReportEvent(FVector LocationEventOccuredAt);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastReportEvent(FVector LocationEventOccuredAt);
    
};

