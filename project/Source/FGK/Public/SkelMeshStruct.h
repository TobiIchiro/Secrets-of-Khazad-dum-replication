#pragma once
#include "CoreMinimal.h"
#include "SkelMeshStruct.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSkelMeshStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletonMesh;
    
    FGK_API FSkelMeshStruct();
};

