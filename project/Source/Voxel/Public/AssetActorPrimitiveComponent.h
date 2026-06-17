#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "AssetActorPrimitiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOXEL_API UAssetActorPrimitiveComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UAssetActorPrimitiveComponent(const FObjectInitializer& ObjectInitializer);

};

