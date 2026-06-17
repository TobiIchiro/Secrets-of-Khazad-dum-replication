#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorCamsWaterfall.generated.h"

class UMorCamsWaterfallLightingComponent;

UCLASS(Blueprintable)
class MORIA_API AMorCamsWaterfall : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorCamsWaterfallLightingComponent* WaterfallLightingComponent;
    
    AMorCamsWaterfall(const FObjectInitializer& ObjectInitializer);

};

