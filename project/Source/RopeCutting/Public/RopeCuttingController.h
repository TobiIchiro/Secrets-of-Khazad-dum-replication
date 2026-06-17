#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RopeCuttingController.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROPECUTTING_API URopeCuttingController : public USceneComponent {
    GENERATED_BODY()
public:
    URopeCuttingController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FName GetCutComponentName_RC(UPrimitiveComponent* HitCollisionComponent);
    
};

