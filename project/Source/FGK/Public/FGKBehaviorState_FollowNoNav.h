#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "FGKBehaviorState_FollowNoNav.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_FollowNoNav : public UFGKBehaviorState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> FollowTargetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* FollowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RunTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarDistance;
    
public:
    UFGKBehaviorState_FollowNoNav();

};

