#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BrushStruct.h"
#include "FGKPlacementVolume.h"
#include "FGKLandmassBrushPlacementVolume.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKLandmassBrushPlacementVolume : public AFGKPlacementVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrushStruct> Templates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LayerGuid;
    
    AFGKLandmassBrushPlacementVolume(const FObjectInitializer& ObjectInitializer);

};

