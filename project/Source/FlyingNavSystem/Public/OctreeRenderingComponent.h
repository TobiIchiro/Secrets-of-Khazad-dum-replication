#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "OctreeRenderingComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOctreeRenderingComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WireMaterial;
    
public:
    UOctreeRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

