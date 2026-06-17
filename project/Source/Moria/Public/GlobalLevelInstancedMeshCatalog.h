#pragma once
#include "CoreMinimal.h"
#include "GlobalLevelInstancedMeshBatch.h"
#include "GlobalLevelInstancedMeshCatalog.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FGlobalLevelInstancedMeshCatalog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalLevelInstancedMeshBatch> Batches;
    
    FGlobalLevelInstancedMeshCatalog();
};

