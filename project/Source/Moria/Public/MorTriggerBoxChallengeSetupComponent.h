#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "TriggerBoxChallengeDataUpdatedDelegate.h"
#include "MorTriggerBoxChallengeSetupComponent.generated.h"

class UMorSetupChallengeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorTriggerBoxChallengeSetupComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriggerBoxChallengeDataUpdated BoxComponentUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference RefChallengeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference RefChallengeBoxProxy;
    
public:
    UMorTriggerBoxChallengeSetupComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ChallengeSetupCompleted(UMorSetupChallengeComponent* ChallengeComponent);
    
};

