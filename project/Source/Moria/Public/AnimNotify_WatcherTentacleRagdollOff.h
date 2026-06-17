#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_WatcherTentacleRagdollOff.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class MORIA_API UAnimNotify_WatcherTentacleRagdollOff : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TentacleIndex;
    
public:
    UAnimNotify_WatcherTentacleRagdollOff();

};

