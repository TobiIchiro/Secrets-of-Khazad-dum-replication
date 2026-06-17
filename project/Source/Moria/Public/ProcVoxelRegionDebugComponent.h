#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProcVoxelRegionDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UProcVoxelRegionDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UProcVoxelRegionDebugComponent(const FObjectInitializer& ObjectInitializer);

};

