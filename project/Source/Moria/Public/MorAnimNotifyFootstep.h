#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotifyFootstepBase.h"
#include "MorAnimNotifyFootstep.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class MORIA_API UMorAnimNotifyFootstep : public UFGKAnimNotifyFootstepBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WwiseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftFoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightFoot;
    
    UMorAnimNotifyFootstep();

};

