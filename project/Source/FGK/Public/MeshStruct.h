#pragma once
#include "CoreMinimal.h"
#include "MeshStruct.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FMeshStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
    FGK_API FMeshStruct();
};

