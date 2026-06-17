#pragma once
#include "CoreMinimal.h"
#include "ChallengeProxyProperties.h"
#include "ContentProxy.h"
#include "ChallengeProxy.generated.h"

UCLASS(Blueprintable)
class MORIA_API AChallengeProxy : public AContentProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeProxyProperties Properties;
    
    AChallengeProxy(const FObjectInitializer& ObjectInitializer);

};

