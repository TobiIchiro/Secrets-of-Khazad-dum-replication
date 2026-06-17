#include "MorCamsWaterfall.h"
#include "MorCamsWaterfallLightingComponent.h"

AMorCamsWaterfall::AMorCamsWaterfall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaterfallLightingComponent = CreateDefaultSubobject<UMorCamsWaterfallLightingComponent>(TEXT("WaterfallLightingComponent"));
}


