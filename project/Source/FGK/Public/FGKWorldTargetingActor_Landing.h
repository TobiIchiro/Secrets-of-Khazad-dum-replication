#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKWorldTargetingActor.h"
#include "FGKWorldTargetingActor_Landing.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKWorldTargetingActor_Landing : public AFGKWorldTargetingActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VelocityOverride;
    
    AFGKWorldTargetingActor_Landing(const FObjectInitializer& ObjectInitializer);

};

