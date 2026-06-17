#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MorSimpleVolumeSpecification.h"
#include "DecorationVolumeComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UDecorationVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSimpleVolumeSpecification VolumeSpec;
    
    UDecorationVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

