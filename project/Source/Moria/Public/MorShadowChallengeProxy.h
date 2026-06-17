#pragma once
#include "CoreMinimal.h"
#include "ChallengeProxy.h"
#include "MorShadowChallengeProxy.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class MORIA_API AMorShadowChallengeProxy : public AChallengeProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Trigger;
    
    AMorShadowChallengeProxy(const FObjectInitializer& ObjectInitializer);

};

