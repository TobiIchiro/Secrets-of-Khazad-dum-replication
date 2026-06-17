#pragma once
#include "CoreMinimal.h"
#include "BMAssetData.generated.h"

class UAkAudioEvent;
class UAkStateValue;
class UAkSwitchValue;
class UAkTrigger;
class UMorBMCustomModificator;

USTRUCT(BlueprintType)
struct FBMAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkStateValue*> MusicStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkSwitchValue*> MusicSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkTrigger*> MusicTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> MusicOverrideEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMorBMCustomModificator*> MusicCustomModificators;
    
    MORIA_API FBMAssetData();
};

