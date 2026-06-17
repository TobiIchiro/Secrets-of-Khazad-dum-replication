#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EWatcherBodyCState.h"
#include "AnimNotify_WatcherConfirmBodyState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class MORIA_API UAnimNotify_WatcherConfirmBodyState : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWatcherBodyCState BodyState;
    
public:
    UAnimNotify_WatcherConfirmBodyState();

};

