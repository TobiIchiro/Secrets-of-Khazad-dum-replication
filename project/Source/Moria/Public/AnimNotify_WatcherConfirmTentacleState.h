#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EWatcherTentacleCState.h"
#include "AnimNotify_WatcherConfirmTentacleState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class MORIA_API UAnimNotify_WatcherConfirmTentacleState : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TentacleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWatcherTentacleCState TentacleState;
    
public:
    UAnimNotify_WatcherConfirmTentacleState();

};

