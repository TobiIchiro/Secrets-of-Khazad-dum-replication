#pragma once
#include "CoreMinimal.h"
#include "FGKOption.h"
#include "FGKOptionWwiseRTPC.generated.h"

class UAkRtpc;

UCLASS(Blueprintable)
class FGK_API UFGKOptionWwiseRTPC : public UFGKOption {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkRtpc* AkRtpc;
    
public:
    UFGKOptionWwiseRTPC();

};

