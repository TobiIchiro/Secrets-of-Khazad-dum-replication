#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "MorArchitectureRoomVolumeInteriorDecoPoint.h"
#include "MorArchitectureRoomVolumeProperties.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorArchitectureRoomVolumeProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RoomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorArchitectureRoomVolumeInteriorDecoPoint> InteriorDecoPoints;
    
    FMorArchitectureRoomVolumeProperties();
};

