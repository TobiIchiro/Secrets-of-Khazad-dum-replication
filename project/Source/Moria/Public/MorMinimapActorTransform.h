#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorMinimapActorTransform.generated.h"

USTRUCT(BlueprintType)
struct FMorMinimapActorTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CellPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAngleDeg;
    
    MORIA_API FMorMinimapActorTransform();
};

