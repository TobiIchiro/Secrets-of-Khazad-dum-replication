#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "MorRecastNavMesh.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorRecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AMorRecastNavMesh(const FObjectInitializer& ObjectInitializer);

};

