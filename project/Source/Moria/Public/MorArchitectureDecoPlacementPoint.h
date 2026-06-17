#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "MorArchitectureDecoPlacementPoint.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorArchitectureDecoPlacementPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag RoomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector WorldSpaceLocation;
    
    FMorArchitectureDecoPlacementPoint();
};

