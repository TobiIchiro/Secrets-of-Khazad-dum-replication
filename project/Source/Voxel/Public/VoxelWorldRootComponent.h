#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "VoxelWorldRootComponent.generated.h"

class UBodySetup;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOXEL_API UVoxelWorldRootComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
public:
    UVoxelWorldRootComponent(const FObjectInitializer& ObjectInitializer);

};

