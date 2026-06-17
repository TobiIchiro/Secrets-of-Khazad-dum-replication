#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FGKLinkedAnimGraphStruct.h"
#include "FGKCharacterAnimSettings.generated.h"

UCLASS(Blueprintable)
class FGK_API UFGKCharacterAnimSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKLinkedAnimGraphStruct> LinkedAnimGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadTrackEaseInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadTrackEaseOutTime;
    
    UFGKCharacterAnimSettings();

};

