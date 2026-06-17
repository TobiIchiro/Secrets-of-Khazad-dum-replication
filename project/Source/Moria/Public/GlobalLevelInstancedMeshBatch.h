#pragma once
#include "CoreMinimal.h"
#include "GlobalInstantiableMesh.h"
#include "GlobalLevelMeshInstance.h"
#include "GlobalLevelInstancedMeshBatch.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FGlobalLevelInstancedMeshBatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalInstantiableMesh Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalLevelMeshInstance> Instances;
    
    FGlobalLevelInstancedMeshBatch();
};

