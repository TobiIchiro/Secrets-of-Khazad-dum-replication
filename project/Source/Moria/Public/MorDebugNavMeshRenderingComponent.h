#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "MorDebugNavMeshRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorDebugNavMeshRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UMorDebugNavMeshRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

