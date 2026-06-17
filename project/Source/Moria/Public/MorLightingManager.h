#pragma once
#include "CoreMinimal.h"
#include "MorManager.h"
#include "MorLightingManager.generated.h"

class AMorWorldLighting;

UCLASS(Blueprintable)
class MORIA_API AMorLightingManager : public AMorManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorWorldLighting* WorldLighting;
    
public:
    AMorLightingManager(const FObjectInitializer& ObjectInitializer);

};

