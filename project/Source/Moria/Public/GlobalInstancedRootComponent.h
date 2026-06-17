#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "GlobalInstancedRootComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UGlobalInstancedRootComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UGlobalInstancedRootComponent(const FObjectInitializer& ObjectInitializer);

};

