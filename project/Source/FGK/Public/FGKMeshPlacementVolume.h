#pragma once
#include "CoreMinimal.h"
#include "FGKPlacementVolume.h"
#include "MeshStruct.h"
#include "FGKMeshPlacementVolume.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKMeshPlacementVolume : public AFGKPlacementVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshStruct> Templates;
    
    AFGKMeshPlacementVolume(const FObjectInitializer& ObjectInitializer);

};

