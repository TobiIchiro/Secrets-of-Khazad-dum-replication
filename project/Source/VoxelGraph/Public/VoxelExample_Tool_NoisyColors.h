#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VoxelGraphGeneratorHelper.h"
#include "VoxelExample_Tool_NoisyColors.generated.h"

UCLASS(Blueprintable)
class UVoxelExample_Tool_NoisyColors : public UVoxelGraphGeneratorHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UVoxelExample_Tool_NoisyColors();

};

