#pragma once
#include "CoreMinimal.h"
#include "DeathVolumeData.h"
#include "MorReplicatedManager.h"
#include "MorDeathVolumeManager.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorDeathVolumeManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDeathVolumeData> DeathVolumes;
    
public:
    AMorDeathVolumeManager(const FObjectInitializer& ObjectInitializer);

};

