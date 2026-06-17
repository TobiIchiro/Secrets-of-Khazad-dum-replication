#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelMagicaVoxSceneEntry.h"
#include "VoxelMagicaVoxScene.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelMagicaVoxScene : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelMagicaVoxSceneEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImportPath;
    
    UVoxelMagicaVoxScene();

};

