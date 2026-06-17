#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MorArchitectureBlock.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorArchitectureBlock : public AStaticMeshActor {
    GENERATED_BODY()
public:
    AMorArchitectureBlock(const FObjectInitializer& ObjectInitializer);

};

