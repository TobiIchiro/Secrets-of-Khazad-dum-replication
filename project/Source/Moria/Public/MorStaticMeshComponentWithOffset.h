#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "MorStaticMeshComponentWithOffset.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorStaticMeshComponentWithOffset : public UStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationDuration;
    
public:
    UMorStaticMeshComponentWithOffset(const FObjectInitializer& ObjectInitializer);

};

