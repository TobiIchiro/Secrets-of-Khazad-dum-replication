#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelCompressedWorldSave.h"
#include "VoxelWorldSaveObject.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelWorldSaveObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelCompressedWorldSave Save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Depth;
    
    UVoxelWorldSaveObject();

};

