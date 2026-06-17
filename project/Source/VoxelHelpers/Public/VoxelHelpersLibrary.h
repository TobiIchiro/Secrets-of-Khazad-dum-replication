#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelHelpersLibrary.generated.h"

class UProceduralMeshComponent;

UCLASS(Blueprintable)
class VOXELHELPERS_API UVoxelHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelHelpersLibrary();

    UFUNCTION(BlueprintCallable)
    static void CreateProcMeshPlane(UProceduralMeshComponent* Mesh, int32 SizeX, int32 SizeY, float Step);
    
};

