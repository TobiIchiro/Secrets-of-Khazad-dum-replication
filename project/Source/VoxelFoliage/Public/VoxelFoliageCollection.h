#pragma once
#include "CoreMinimal.h"
#include "VoxelFoliageCollectionBase.h"
#include "VoxelFoliageCollection.generated.h"

class UVoxelFoliage;

UCLASS(Blueprintable)
class VOXELFOLIAGE_API UVoxelFoliageCollection : public UVoxelFoliageCollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVoxelFoliage*> Foliages;
    
    UVoxelFoliageCollection();

};

