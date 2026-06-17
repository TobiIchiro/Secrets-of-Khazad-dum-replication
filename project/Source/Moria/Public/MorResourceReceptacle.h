#pragma once
#include "CoreMinimal.h"
#include "MorContainerInstance.h"
#include "MorReceptacle.h"
#include "MorResourceReceptacle.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorResourceReceptacle : public AMorReceptacle, public IMorContainerInstance {
    GENERATED_BODY()
public:
    AMorResourceReceptacle(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

