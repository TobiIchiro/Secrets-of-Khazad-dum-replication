#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MorChallengeInstance.h"
#include "MorShadowChallenge.generated.h"

class UFGKActorFSMComponent;

UCLASS(Blueprintable)
class MORIA_API AMorShadowChallenge : public AActor, public IMorChallengeInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* FSMComp;
    
    AMorShadowChallenge(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChallengeTriggerLocationAndExtent(FVector WorldLocation, FRotator WorldRotation, FVector UnscaledExtent);
    

    // Fix for true pure virtual functions not being implemented
};

