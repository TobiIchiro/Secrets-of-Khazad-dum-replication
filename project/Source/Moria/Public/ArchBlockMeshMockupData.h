#pragma once
#include "CoreMinimal.h"
#include "ArchBlockMeshMockupData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct MORIA_API FArchBlockMeshMockupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Pristine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Medium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* High;
    
    FArchBlockMeshMockupData();
};

